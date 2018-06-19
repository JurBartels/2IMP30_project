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
//## link itsControl_system
class Control_system;

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
    
    ////    Additional operations    ////
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFire_sensor : virtual public AOMInstance {
    DECLARE_META(Fire_sensor, OMAnimatedFire_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.h
*********************************************************************/
