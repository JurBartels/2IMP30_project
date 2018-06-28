/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_sensor
//!	Generated Date	: Thu, 28, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Pressure_sensor.h"
//#[ ignore
#define Default_Pressure_sensor_Pressure_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Pressure_sensor
Pressure_sensor::Pressure_sensor() {
    NOTIFY_CONSTRUCTOR(Pressure_sensor, Pressure_sensor(), 0, Default_Pressure_sensor_Pressure_sensor_SERIALIZE);
}

Pressure_sensor::~Pressure_sensor() {
    NOTIFY_DESTRUCTOR(~Pressure_sensor, true);
}

int Pressure_sensor::getPressure() const {
    return pressure;
}

void Pressure_sensor::setPressure(int p_pressure) {
    pressure = p_pressure;
    NOTIFY_SET_OPERATION;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPressure_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pressure", x2String(myReal->pressure));
}
//#]

IMPLEMENT_META_P(Pressure_sensor, Default, Default, false, OMAnimatedPressure_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.cpp
*********************************************************************/
