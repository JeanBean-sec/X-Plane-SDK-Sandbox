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

	dat_trans::dat_trans() {
		drUncorrectedBaroAltitude = XPLMFindDataRef("sim/flightmodel/misc/h_ind");
		drCorrectedBaroAltitude = nullptr;
		drAltitudeRate = XPLMFindDataRef("sim/flightmodel/position/vh_ind_fpm");;
		drComputedAirspeed = nullptr;
		drTrueAirspeed = XPLMFindDataRef("sim/flightmodel/forces/vx_air_on_acf");
		drStaticAirTemperature = XPLMFindDataRef("sim/cockpit2/temperature/outside_air_temp_degc");
		drRadioAltitude = XPLMFindDataRef("sim/cockpit2/gauges/indicators/radio_altimeter_height_ft_pilot");
		drComputedTerrainClearance = nullptr;
		drDecisionHeight = XPLMFindDataRef("sim/cockpit/misc/radio_altimeter_minimum");
		drPitchAltitude = XPLMFindDataRef("sim/flightmodel/position/true_theta");
		drRollAltitude = XPLMFindDataRef("sim/flightmodel/position/true_phi");
		drLatitudePosition = XPLMFindDataRef("sim/flightmodel/position/latitude");
		drLongitudePosition = XPLMFindDataRef("sim/flightmodel/position/longitude");
		drBodyNormalAcceleration = XPLMFindDataRef("sim/flightmodel/forces/g_nrml");
		drBodyLongitudinalAcceleration = XPLMFindDataRef("sim/flightmodel/forces/g_axil");
		drMagneticTrackAngle = XPLMFindDataRef("sim/cockpit2/gauges/indicators/ground_track_mag_pilot");
		drTrueTrackAngle = XPLMFindDataRef("sim/cockpit2/tcas/targets/position/hpath");
		drTrueHeading = XPLMFindDataRef("sim/flightmodel/position/true_psi");
		drMagneticHeading = XPLMFindDataRef("sim/flightmodel/position/mag_psi");
		drInertialAltitude = XPLMFindDataRef("sim/flightmodel/position/elevation"); //meters
		drGroundSpeed = XPLMFindDataRef("sim/flightmodel/position/groundspeed");
		drHFOM = nullptr;
		drVFOM = nullptr;
		drHDOP = nullptr;
		drVDOP = nullptr;
		drHIL = nullptr;
		drGlideSlopeDeviation = nullptr;
		drLocalizerArmed = XPLMFindDataRef("sim/cockpit2/autopilot/hnav_armed");
		drILSFrequencySet = XPLMFindDataRef("sim/cockpit2/autopilot/glideslope_armed");
		drSelectedRunwayHeading = nullptr;
	}


	double dat_trans::getUncorrectedBaroAltitude() {
		return XPLMGetDataf(drUncorrectedBaroAltitude);
	};

	//double dat_trans::getCorrectedBaroAltitude() {};

	double dat_trans::getAltitudeRate() {
		return XPLMGetDataf(drAltitudeRate);
	};
	//double dat_trans::getComputedAirspeed() {}; //processed TODO

	double dat_trans::getTrueAirspeed() {
		return XPLMGetDataf(drTrueAirspeed);
	};

	double dat_trans::getStaticAirTemperature() {
		return XPLMGetDataf(drStaticAirTemperature);
	};

	double dat_trans::getRadioAltitude() {
		return XPLMGetDataf(drRadioAltitude);
	};

	//double dat_trans::getComputedTerrainClearance() {}; //processed TODO

	double dat_trans::getDecisionHeight() {
		return XPLMGetDataf(drDecisionHeight);
	};

	double dat_trans::getPitchAltitude() {
		return XPLMGetDataf(drPitchAltitude);
	};

	double dat_trans::getRollAltitude() {
		return XPLMGetDataf(drRollAltitude);
	};

	double dat_trans::getLatitudePosition() {
		return XPLMGetDataf(drLatitudePosition);
	};

	double dat_trans::getLongitudePosition() {
		return XPLMGetDataf(drLongitudePosition);
	};

	double dat_trans::getBodyNormalAcceleration() {
		return XPLMGetDataf(drBodyNormalAcceleration);
	};

	double dat_trans::getBodyLongitudinalAcceleration() {
		return XPLMGetDataf(drBodyLongitudinalAcceleration);
	};

	double dat_trans::getMagneticTrackAngle() {
		return XPLMGetDataf(drMagneticTrackAngle);
	};

	double dat_trans::getTrueTrackAngle() {
		return XPLMGetDataf(drTrueTrackAngle);
	};

	double dat_trans::getTrueHeading() {
		return XPLMGetDataf(drTrueHeading);
	};

	double dat_trans::getMagneticHeading() {
		return XPLMGetDataf(drMagneticHeading);
	};

	double dat_trans::getInertialAltitude() {
		return XPLMGetDataf(drInertialAltitude);
	};

	double dat_trans::getGroundSpeed() {
		return XPLMGetDataf(drGroundSpeed);
	};


	//GPS processed TODO
	//double dat_trans::getHFOM() {};

	//double dat_trans::getVFOM() {};

	//double dat_trans::getHDOP() {};

	//double dat_trans::getVDOP() {};

	//double dat_trans::getHIL() {};



	//double dat_trans::getGlideSlopeDeviation() {};

	double dat_trans::getLocalizerArmed() {
		return XPLMGetDataf(drLocalizerArmed);
	};

	bool dat_trans::isILSFrequencySet() {
		return XPLMGetDataf(drILSFrequencySet);
	};

	//float dat_trans::getSelectedRunwayHeading() {}; //TODO