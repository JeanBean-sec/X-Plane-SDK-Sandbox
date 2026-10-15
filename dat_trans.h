#pragma once
class dat_trans
{
private:
	//egpws data inputs
	//raw sensor data should be fixed point, but we can also use 64bit doubles
	//no static types for memory

	//air data
	double Uncorrected_Baro_Altitude;
	double Corrected_Baro_Altitude;
	double Altitude_Rate;
	double Computed_Airspeed;
	double True_Airspeed;
	double Static_Air_Temperature;

	//radio altitude
	double Radio_Altitude;
	double Computed_Terrain_Clearance;
	double Decision_Height;

	// computed terrain clearance is difference of terrain database elevation from geometric altitude
	//radio altitude is unreasonable when less than computed terrain clearance by more than 2000ft

	//accelerometer data
	double Pitch_Altitude;
	double Roll_Altitude;
	double Latitude_Position;
	double Longitude_Position;
	double Body_Normal_Acceleration;
	double Body_Longitudinal_Acceleration;
	double Magnetic_Angle;
	double True_Angle;
	double True_Heading;
	double Magnetic_Heading;
	double Inertial_Altitude;
	double Ground_Speed;

	//gps data
	double HFOM;
	double VFOM;
	double HDOP;
	double VDOP;
	double HIL;

	//vhf data
	double Glide_Slope_Angle;
	double Localizer_Heading;
	bool ILS_Frequency;
	float Selected_Runway_Heading;

	//AOA
	double AOA;

public:
	dat_trans() {};
	~dat_trans() {};
	//getters
	double getUncorrectedBaroAltitude() {};
	double getCorrectedBaroAltitude() {};
	double getAltitudeRate() {};
	double getComputedAirspeed() {};
	double getTrueAirspeed() {};
	double getStaticAirTemperature() {};
	double getRadioAltitude() {};
	double getComputedTerrainClearance() {};
	double getDecisionHeight() {};
	double getPitchAltitude() {};
	double getRollAltitude() {};
	double getLatitudePosition() {};
	double getLongitudePosition() {};
	double getBodyNormalAcceleration() {};
	double getBodyLongitudinalAcceleration() {};
	double getMagneticAngle() {};
	double getTrueAngle() {};
	double getTrueHeading() {};
	double getMagneticHeading() {};
	double getInertialAltitude() {};
	double getGroundSpeed() {};
	double getHFOM() {};
	double getVFOM() {};
	double getHDOP() {};
	double getVDOP() {};
	double getHIL() {};
	double getGlideSlopeAngle() {};
	double getLocalizerHeading() {};
	bool isILSFrequencySet() {};
	float getSelectedRunwayHeading() {};

	//additional methods for data processing can be added here

};

