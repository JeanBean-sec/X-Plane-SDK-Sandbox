#include "XPLMUtilities.h"
#include "XPLMDataAccess.h"
#include "egpws.h"


void Mode1::EvaluateSinkRate(double Altitude, double Drate) {
    {
        // Mode 1 Upper Band: 1000ft to 2450ft AGL
        if (Altitude > 1000.00 && Altitude <= 2450.00) {
            double threshold = -1.0 * ((Altitude + 1429.00) / 0.7749);
            // Triggers if descending FASTER (more negative) than the threshold
            SinkRate = (Drate <= threshold);
            if (Drate <= threshold)
                XPLMSetDatai(XPLMFindDataRef("egpws/sinkrate"), 1);
            else {
				XPLMSetDatai(XPLMFindDataRef("egpws/sinkrate"), 0);
            }
        }
        // Mode 1 Lower Band: 50ft to 1000ft AGL
        else if (Altitude >= 50.00 && Altitude <= 1000.00) {
            double threshold = -1.0 * ((Altitude + 481.50) / 0.4727);
            SinkRate = (Drate <= threshold);
            if (Drate <= threshold)
                XPLMSetDatai(XPLMFindDataRef("egpws/sinkrate"), 1);
            else {
                XPLMSetDatai(XPLMFindDataRef("egpws/sinkrate"), 0);
            }
        }
        // Outside EGPWS Mode 1 limits
        else {
            SinkRate = false;
            XPLMSetDatai(XPLMFindDataRef("egpws/sinkrate"), 0);
        }   
    }
}

Mode1::Mode1() {
    WasSinkRate = false;
    SinkRate = false;
    Pullup = false;
}


void Mode1::EvaluateMode(double Altitude, double Drate) {
    EvaluateSinkRate(Altitude, Drate);

    if (SinkRate && !WasSinkRate) {
		//speak "Sink Rate"
    }
    WasSinkRate = SinkRate;
};

