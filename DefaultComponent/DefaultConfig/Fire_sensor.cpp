/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_sensor
//!	Generated Date	: Fri, 29, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_sensor.h"
//#[ ignore
#define Default_Fire_sensor_Fire_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Fire_sensor
Fire_sensor::Fire_sensor() {
    NOTIFY_CONSTRUCTOR(Fire_sensor, Fire_sensor(), 0, Default_Fire_sensor_Fire_sensor_SERIALIZE);
}

Fire_sensor::~Fire_sensor() {
    NOTIFY_DESTRUCTOR(~Fire_sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Fire_sensor, Default, Default, false, OMAnimatedFire_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/
