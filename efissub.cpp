#define XPLM400
#define XPLM420

#include "XPLMDisplay.h"
#include "XPLMGraphics.h"
#include "XPLMMenus.h"
#include "XPLMWeather.h"
#include "XPLMDataAccess.h"
#include "XPLMProcessing.h"
#include "dat_trans.h"
#include "egpws.h"

#include <string.h>
#include <fstream>
// the acfutil library breaks these include lines so be careful


#if IBM
#include <windows.h>
#endif
#if LIN
#include <GL/gl.h>
#elif __GNUC__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif


// An opaque handle to the window we will create
static XPLMWindowID	g_window;


// An opaque handle to the flight loop we will create
static XPLMFlightLoopID simple_loop;


//null dataref handles
static XPLMDataRef  g_lat_ref = nullptr;
static XPLMDataRef  g_lon_ref = nullptr;
static XPLMDataRef  g_alt_ref = nullptr;


XPLMCreateWindow_t windowDef = { 0 };

// Callbacks we will register when we create our window
static void				draw_hello_world(XPLMWindowID in_window_id, void* in_refcon);
static int					dummy_mouse_handler(XPLMWindowID in_window_id, int x, int y, int is_down, void* in_refcon) { return 0; }
static XPLMCursorStatus	dummy_cursor_status_handler(XPLMWindowID in_window_id, int x, int y, void* in_refcon) { return xplm_CursorDefault; }
static int					dummy_wheel_handler(XPLMWindowID in_window_id, int x, int y, int wheel, int clicks, void* in_refcon) { return 0; }
static void				dummy_key_handler(XPLMWindowID in_window_id, char key, XPLMKeyFlags flags, char virtual_key, void* in_refcon, int losing_focus) {}

//flightloopcallback protos
static float QueryWeatherCallback(){}
static float simpleflightloop(){}

static void MyMenuHandlerCallback(void* inMenuref, void* inItemref) {};

float visibility = 0.0f;

float elapsed = 0.0f;

dat_trans data_transfer;


double altituderate = 0.0f; //sim/flightmodel/position/vh_ind_fpm
double radioaltitude = 0.0f; //sim/cockpit2/gauges/indicators/radio_altimeter_height_ft_pilot


//initialize objects
static Mode1 mode1;

//initialize sinkrate dataref
XPLMDataRef drSinkRate = NULL;
int drSinkRateValue;

int GetSinkRateCB(void* inRefcon) {
	return drSinkRateValue;
};
void SetSinkRateCB(void* inRefcon, int inValue) {
	drSinkRateValue = inValue;
}


static float simpleflightloop(float inElapsedSinceLastCall, float inElapsedTimeSinceLastFlightLoop, int inCounter, void* inRefcon) 
{
	//custom data transfer object
	altituderate = data_transfer.getAltitudeRate();
	radioaltitude = data_transfer.getRadioAltitude();

	elapsed = XPLMGetElapsedTime();

	mode1.EvaluateMode(radioaltitude, altituderate);
	
	return 0.001f; //1hz / 100ms update rate
}


static float QueryWeatherCallback(float inElapsedSinceLastCall, float inElapsedTimeSinceLastFlightLoop, int inCounter, void* inRefcon)
{
	// 1. Ensure DataRefs are valid
	if (!g_lat_ref || !g_lon_ref || !g_alt_ref) {
		return 1.0f; // If X-Plane isn't quite ready, retry in 1 second
	}

	// 2. Grab coordinates
	double current_lat = XPLMGetDatad(g_lat_ref);
	double current_lon = XPLMGetDatad(g_lon_ref);
	double current_alt = XPLMGetDatad(g_alt_ref);

	// 3. Secure heap allocation for the large struct
	XPLMWeatherInfo_t weather;
	weather = { 0 };
	weather.structSize = sizeof(weather);

	// 4. Query the operational weather engine safely
	int success = XPLMGetWeatherAtLocation(current_lat, current_lon, current_alt, &weather);

	if (success == 1 || success == 0) {
		visibility = weather.visibility;
	}

	std::ofstream outputFile("example.txt");

	if (outputFile.is_open()) {
		outputFile << "Visibility: " << visibility << "\n";

		outputFile.close();
	}
	else {
		NULL;
	}

	xplm_FlightLoop_Phase_AfterFlightModel;

	// 5. CRITICAL: Returning 0 tells X-Plane to kill this callback. 
	// It will run exactly ONCE and never consume CPU cycles again.
	return 1800.0f;
}


PLUGIN_API int XPluginStart(
	char* outName,
	char* outSig,
	char* outDesc)
{
	strcpy(outName, "HelloWorld3Plugin");
	strcpy(outSig, "xpsdk.examples.helloworld3plugin");
	strcpy(outDesc, "A Hello World plug-in for the XPLM300 SDK.");

	// DataRef setup for pullup activation


	drSinkRate = XPLMRegisterDataAccessor(
		"egpws/sinkrate",
		xplmType_Int,
		1,
		GetSinkRateCB, SetSinkRateCB,
		NULL, NULL,
		NULL, NULL,
		NULL, NULL,
		NULL, NULL,
		NULL, NULL,
		NULL, NULL);

	drSinkRate = XPLMFindDataRef("egpws/sinkrate");
	XPLMSetDatai(drSinkRate, 0); // Initialize to 0 (inactive)

	XPLMMenuID MENU;

	MENU = XPLMCreateMenu("hello", NULL, NULL, MyMenuHandlerCallback, 0);

	XPLMCreateWindow_t params;
	params = { 0 };
	params.structSize = sizeof(params);
	params.visible = 1;
	params.drawWindowFunc = draw_hello_world;
	// Note on "dummy" handlers:
	// Even if we don't want to handle these events, we have to register a "do-nothing" callback for them
	params.handleMouseClickFunc = dummy_mouse_handler;
	params.handleRightClickFunc = dummy_mouse_handler;
	params.handleMouseWheelFunc = dummy_wheel_handler;
	params.handleKeyFunc = dummy_key_handler;
	params.handleCursorFunc = dummy_cursor_status_handler;
	params.refcon = NULL;
	params.layer = xplm_WindowLayerFloatingWindows;
	// Opt-in to styling our window like an X-Plane 11 native window
	// If you're on XPLM300, not XPLM301, swap this enum for the literal value 1.
	params.decorateAsFloatingWindow = xplm_WindowDecorationRoundRectangle;
	

	// Set the window's initial bounds
	// Note that we're not guaranteed that the main monitor's lower left is at (0, 0)...
	// We'll need to query for the global desktop bounds!
	int left, bottom, right, top;
	XPLMGetScreenBoundsGlobal(&left, &top, &right, &bottom);
	params.left = left + 50;
	params.bottom = bottom + 150;
	params.right = params.left + 200;
	params.top = params.bottom + 200;

	g_window = XPLMCreateWindowEx(&params);

	// Position the window as a "free" floating window, which the user can drag around
	XPLMSetWindowPositioningMode(g_window, xplm_WindowPositionFree, -1);
	// Limit resizing our window: maintain a minimum width/height of 100 boxels and a max width/height of 300 boxels
	XPLMSetWindowResizingLimits(g_window, 200, 200, 300, 300);
	XPLMSetWindowTitle(g_window, "DTO Monitoring");

	return g_window != NULL;
}

PLUGIN_API void	XPluginStop(void)
{
	// Since we created the window, we'll be good citizens and clean it up
	XPLMDestroyWindow(g_window);
	g_window = NULL;
}

PLUGIN_API void XPluginDisable(void) {}
PLUGIN_API int  XPluginEnable(void) { 



	// Find variables when flight engine initializes
	g_lat_ref = XPLMFindDataRef("sim/flightmodel/position/latitude");
	g_lon_ref = XPLMFindDataRef("sim/flightmodel/position/longitude");
	g_alt_ref = XPLMFindDataRef("sim/flightmodel/position/elevation");

	// additional simple loop creation
	XPLMCreateFlightLoop_t params;
	params = { 0 };
	params.callbackFunc = simpleflightloop;
	params.phase = xplm_FlightLoop_Phase_AfterFlightModel;
	params.structSize = sizeof(params);
	params.refcon = NULL;

	simple_loop = XPLMCreateFlightLoop(&params);

	XPLMRegisterFlightLoopCallback(simpleflightloop, 1.0f, NULL);


	// Register our deferred loop to kick off 1 second after flight assets load
	XPLMRegisterFlightLoopCallback(QueryWeatherCallback, 1.0f, NULL);

	return 1; }

PLUGIN_API void XPluginReceiveMessage(XPLMPluginID inFrom, int inMsg, void* inParam) {}

void	draw_hello_world(XPLMWindowID in_window_id, void* in_refcon)
{
	// Mandatory: We *must* set the OpenGL state before drawing
	// (we can't make any assumptions about it)
	XPLMSetGraphicsState(
		0 /* no fog */,
		0 /* 0 texture units */,
		0 /* no lighting */,
		0 /* no alpha testing */,
		1 /* do alpha blend */,
		1 /* do depth testing */,
		0 /* no depth writing */
	);

	int l, t, r, b;
	XPLMGetWindowGeometry(in_window_id, &l, &t, &r, &b);

	float col_white[] = { 1.0, 1.0, 1.0 }; // red, green, blue


	XPLMDrawString(col_white, l + 10, t - 20, "Hello world!", NULL, xplmFont_Proportional);



	XPLMDrawString(col_white, l + 20, t - 90, "AGL Radio Altitude:", NULL, xplmFont_Proportional);
	XPLMDrawNumber(col_white, l + 20, t - 50, visibility, 1, 5, 0, xplmFont_Proportional);
	XPLMDrawNumber(col_white, l + 40, t - 70, radioaltitude, 1, 5, 0, xplmFont_Proportional);
}