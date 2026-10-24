#pragma once

typedef enum {
    ACTIVE = 1,
    INACTIVE = 2,
} ModeState;

class Mode1 {
private:

    bool WasSinkRate;
    bool SinkRate;
    bool Pullup;

    void EvaluateSinkRate(double Altitude, double Drate);
    bool EvaluatePullUp(double Altitude, double Drate);

public:
    Mode1();
	void EvaluateMode(double Altitude, double Drate);
};

class Mode2 {};
class Mode3 {};
class Mode4 {};
class Mode5 {};
class Mode6 {};
class Mode7 {};