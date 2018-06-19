/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.h
*********************************************************************/

#ifndef Fire_sensor_H
#define Fire_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Fire_sensor
class Fire_sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFire_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fire_sensor();
    
    //## auto_generated
    ~Fire_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_sensor : virtual public AOMInstance {
    DECLARE_META(Fire_sensor, OMAnimatedFire_sensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.h
*********************************************************************/
