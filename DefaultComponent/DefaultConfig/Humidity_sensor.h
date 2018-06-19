/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.h
*********************************************************************/

#ifndef Humidity_sensor_H
#define Humidity_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Humidity_sensor
class Humidity_sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHumidity_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Humidity_sensor();
    
    //## auto_generated
    ~Humidity_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getHumidity() const;
    
    //## auto_generated
    void setHumidity(int p_humidity);
    
    ////    Attributes    ////

protected :

    int humidity;		//## attribute humidity
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHumidity_sensor : virtual public AOMInstance {
    DECLARE_META(Humidity_sensor, OMAnimatedHumidity_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.h
*********************************************************************/
