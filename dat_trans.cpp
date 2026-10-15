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
XPLMDataRef drMagneticAngle = nullptr;
XPLMDataRef drTrueAngle = nullptr;
XPLMDataRef drTrueHeading = nullptr;
XPLMDataRef drMagneticHeading = nullptr;
XPLMDataRef drInertialAltitude = nullptr;
XPLMDataRef drGroundSpeed = nullptr;
XPLMDataRef drHFOM = nullptr;
XPLMDataRef drVFOM = nullptr;
XPLMDataRef drHDOP = nullptr;
XPLMDataRef drVDOP = nullptr;
XPLMDataRef drHIL = nullptr;
XPLMDataRef drGlideSlopeAngle = nullptr;
XPLMDataRef drLocalizerHeading = nullptr;
XPLMDataRef drILSFrequencySet = nullptr;
XPLMDataRef drSelectedRunwayHeading = nullptr;


	double dat_trans::getUncorrectedBaroAltitude() {
		drUncorrectedBaroAltitude = XPLMFindDataRef("sim/cockpit2/gauges/indicators/barometer_setting_in_hg");
		return XPLMGetDataf(drUncorrectedBaroAltitude);
	};

	double dat_trans::getCorrectedBaroAltitude() {};

	double dat_trans::getAltitudeRate() {
		drAltitudeRate = XPLMFindDataRef("sim/flightmodel/position/vh_ind_fpm2");
		return XPLMGetDataf(drAltitudeRate);
	};
	double dat_trans::getComputedAirspeed() {}; //processed

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

	double dat_trans::getComputedTerrainClearance() {}; //processed

	double dat_trans::getDecisionHeight() {
		drDecisionHeight = XPLMFindDataRef("sim/cockpit/misc/radio_altimeter_minimum");
		return XPLMGetDataf(drDecisionHeight);
	};

	double dat_trans::getPitchAltitude() {};

	double dat_trans::getRollAltitude() {};

	double dat_trans::getLatitudePosition() {};

	double dat_trans::getLongitudePosition() {};

	double dat_trans::getBodyNormalAcceleration() {};

	double dat_trans::getBodyLongitudinalAcceleration() {};

	double dat_trans::getMagneticAngle() {};

	double dat_trans::getTrueAngle() {};

	double dat_trans::getTrueHeading() {};

	double dat_trans::getMagneticHeading() {};

	double dat_trans::getInertialAltitude() {};

	double dat_trans::getGroundSpeed() {};

	double dat_trans::getHFOM() {};

	double dat_trans::getVFOM() {};

	double dat_trans::getHDOP() {};

	double dat_trans::getVDOP() {};

	double dat_trans::getHIL() {};

	double dat_trans::getGlideSlopeAngle() {};

	double dat_trans::getLocalizerHeading() {};

	bool dat_trans::isILSFrequencySet() {};

	float dat_trans::getSelectedRunwayHeading() {};