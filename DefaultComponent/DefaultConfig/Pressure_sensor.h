/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.h
*********************************************************************/

#ifndef Pressure_sensor_H
#define Pressure_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Pressure_sensor
class Pressure_sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPressure_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pressure_sensor();
    
    //## auto_generated
    ~Pressure_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getPressure() const;
    
    //## auto_generated
    void setPressure(int p_pressure);
    
    ////    Attributes    ////

protected :

    int pressure;		//## attribute pressure
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPressure_sensor : virtual public AOMInstance {
    DECLARE_META(Pressure_sensor, OMAnimatedPressure_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.h
*********************************************************************/
