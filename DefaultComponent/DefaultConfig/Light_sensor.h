/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Light_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.h
*********************************************************************/

#ifndef Light_sensor_H
#define Light_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Light_sensor
class Light_sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLight_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Light_sensor();
    
    //## auto_generated
    ~Light_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLight_sensor : virtual public AOMInstance {
    DECLARE_META(Light_sensor, OMAnimatedLight_sensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.h
*********************************************************************/
