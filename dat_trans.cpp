#include "dat_trans.h"
#include "XPLMDataAccess.h"

XPLMDataRef drUncorrectedBaroAltitude = nullptr;
XPLMDataRef drCorrectedBaroAltitude = nullptr;
XPLMDataRef drAltitudeRate = nullptr;
XPLMDataRef drComputedAirspeed = nullptr;
XPLMDataRef drTrueAirspeed = nullptr;
XPLMDataRef drStaticAirTemperature = nullptr;
XPLMDataRef drRadioAltitude = nullptr;
XPLMDataRef drComputedTerrainClearance = nullptr;
XPLMDataRef drDecisionHeight = nullptr;
XPLMDataRef drPitchAltitude = nullptr;
XPLMDataRef drRollAltitude = nullptr;
XPLMDataRef drLatitudePosition = nullptr;
XPLMDataRef drLongitudePosition = nullptr;
XPLMDataRef drBodyNormalAcceleration = nullptr;
XPLMDataRef drBodyLongitudinalAcceleration = nullptr;
XPLMDataRef drMagneticTrackAngle = nullptr;
XPLMDataRef drTrueTrackAngle = nullptr;
XPLMDataRef drTrueHeading = nullptr;
XPLMDataRef drMagneticHeading = nullptr;
XPLMDataRef drInertialAltitude = nullptr;
XPLMDataRef drGroundSpeed = nullptr;
XPLMDataRef drHFOM = nullptr;
XPLMDataRef drVFOM = nullptr;
XPLMDataRef drHDOP = nullptr;
XPLMDataRef drVDOP = nullptr;
XPLMDataRef drHIL = nullptr;
XPLMDataRef drGlideSlopeDeviation = nullptr;
XPLMDataRef drLocalizerArmed = nullptr;
XPLMDataRef drILSFrequencySet = nullptr;
XPLMDataRef drSelectedRunwayHeading = nullptr;


	double dat_trans::getUncorrectedBaroAltitude() {
		drUncorrectedBaroAltitude = XPLMFindDataRef("sim/flightmodel/misc/h_ind");
		return XPLMGetDataf(drUncorrectedBaroAltitude);
	};

	//double dat_trans::getCorrectedBaroAltitude() {};

	double dat_trans::getAltitudeRate() {
		drAltitudeRate = XPLMFindDataRef("sim/flightmodel/position/vh_ind_fpm2");
		return XPLMGetDataf(drAltitudeRate);
	};
	//double dat_trans::getComputedAirspeed() {}; //processed TODO

	double dat_trans::getTrueAirspeed() {
		drTrueAirspeed = XPLMFindDataRef("sim/flightmodel/forces/vx_air_on_acf");
		return XPLMGetDataf(drTrueAirspeed);
	};

	double dat_trans::getStaticAirTemperature() {
		drStaticAirTemperature = XPLMFindDataRef("sim/cockpit2/temperature/outside_air_temp_degc");
		return XPLMGetDataf(drStaticAirTemperature);
	};

	double dat_trans::getRadioAltitude() {
		drRadioAltitude = XPLMFindDataRef("sim/flightmodel/position/y_agl");
		return XPLMGetDataf(drRadioAltitude);
	};

	//double dat_trans::getComputedTerrainClearance() {}; //processed TODO

	double dat_trans::getDecisionHeight() {
		drDecisionHeight = XPLMFindDataRef("sim/cockpit/misc/radio_altimeter_minimum");
		return XPLMGetDataf(drDecisionHeight);
	};

	double dat_trans::getPitchAltitude() {
		drPitchAltitude = XPLMFindDataRef("sim/flightmodel/position/true_theta");
		return XPLMGetDataf(drPitchAltitude);
	};

	double dat_trans::getRollAltitude() {
		drRollAltitude = XPLMFindDataRef("sim/flightmodel/position/true_phi");
		return XPLMGetDataf(drRollAltitude);
	};

	double dat_trans::getLatitudePosition() {
		drLatitudePosition = XPLMFindDataRef("sim/flightmodel/position/latitude");
		return XPLMGetDataf(drLatitudePosition);
	};

	double dat_trans::getLongitudePosition() {
		drLongitudePosition = XPLMFindDataRef("sim/flightmodel/position/longitude");
		return XPLMGetDataf(drLongitudePosition);
	};

	double dat_trans::getBodyNormalAcceleration() {
		drBodyNormalAcceleration = XPLMFindDataRef("sim/flightmodel/forces/g_nrml");
		return XPLMGetDataf(drBodyNormalAcceleration);
	};

	double dat_trans::getBodyLongitudinalAcceleration() {
		drBodyLongitudinalAcceleration = XPLMFindDataRef("sim/flightmodel/forces/g_axil");
		return XPLMGetDataf(drBodyLongitudinalAcceleration);
	};

	double dat_trans::getMagneticTrackAngle() {
		drMagneticTrackAngle = XPLMFindDataRef("sim/cockpit2/gauges/indicators/ground_track_mag_pilot");
		return XPLMGetDataf(drMagneticTrackAngle);
	};

	double dat_trans::getTrueTrackAngle() {
		drTrueTrackAngle = XPLMFindDataRef("sim/cockpit2/tcas/targets/position/hpath");
		return XPLMGetDataf(drTrueTrackAngle);
	};

	double dat_trans::getTrueHeading() {
		drTrueHeading = XPLMFindDataRef("sim/flightmodel/position/true_psi");
		return XPLMGetDataf(drTrueHeading);
	};

	double dat_trans::getMagneticHeading() {
		drMagneticHeading = XPLMFindDataRef("sim/flightmodel/position/mag_psi");
		return XPLMGetDataf(drMagneticHeading);
	};

	double dat_trans::getInertialAltitude() {
		drInertialAltitude = XPLMFindDataRef("sim/flightmodel/position/elevation"); //meters
		return XPLMGetDataf(drInertialAltitude);
	};

	double dat_trans::getGroundSpeed() {
		drGroundSpeed = XPLMFindDataRef("sim;/flightmodel/position/groundspeed");
		return XPLMGetDataf(drGroundSpeed);
	};


	//GPS processed TODO
	//double dat_trans::getHFOM() {};

	//double dat_trans::getVFOM() {};

	//double dat_trans::getHDOP() {};

	//double dat_trans::getVDOP() {};

	//double dat_trans::getHIL() {};



	double dat_trans::getGlideSlopeDeviation() {
		drGlideSlopeDeviation = XPLMFindDataRef("sim/cockpit/warnings/annunciators/glideslope");
		return XPLMGetDataf(drGlideSlopeDeviation);
	};

	double dat_trans::getLocalizerArmed() {
		drLocalizerArmed = XPLMFindDataRef("sim/cockpit2/autopilot/hnav_armed");
		return XPLMGetDataf(drLocalizerArmed);
	};

	bool dat_trans::isILSFrequencySet() {
		drILSFrequencySet = XPLMFindDataRef("sim/cockpit2/autopilot/glideslope_armed");
		return XPLMGetDataf(drILSFrequencySet);
	};

	//float dat_trans::getSelectedRunwayHeading() {}; //TODO