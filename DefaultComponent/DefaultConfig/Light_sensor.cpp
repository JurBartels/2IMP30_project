/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Light_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Light_sensor.h"
//#[ ignore
#define Default_Light_sensor_Light_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Light_sensor
Light_sensor::Light_sensor() {
    NOTIFY_CONSTRUCTOR(Light_sensor, Light_sensor(), 0, Default_Light_sensor_Light_sensor_SERIALIZE);
}

Light_sensor::~Light_sensor() {
    NOTIFY_DESTRUCTOR(~Light_sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Light_sensor, Default, Default, false, OMAnimatedLight_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.cpp
*********************************************************************/
