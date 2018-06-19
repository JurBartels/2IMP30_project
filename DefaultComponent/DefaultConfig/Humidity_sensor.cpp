/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Humidity_sensor.h"
//#[ ignore
#define Default_Humidity_sensor_Humidity_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Humidity_sensor
Humidity_sensor::Humidity_sensor() {
    NOTIFY_CONSTRUCTOR(Humidity_sensor, Humidity_sensor(), 0, Default_Humidity_sensor_Humidity_sensor_SERIALIZE);
}

Humidity_sensor::~Humidity_sensor() {
    NOTIFY_DESTRUCTOR(~Humidity_sensor, true);
}

int Humidity_sensor::getHumidity() const {
    return humidity;
}

void Humidity_sensor::setHumidity(int p_humidity) {
    humidity = p_humidity;
    NOTIFY_SET_OPERATION;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHumidity_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("humidity", x2String(myReal->humidity));
}
//#]

IMPLEMENT_META_P(Humidity_sensor, Default, Default, false, OMAnimatedHumidity_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.cpp
*********************************************************************/
