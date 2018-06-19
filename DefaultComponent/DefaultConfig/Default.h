/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Actuation_system;

//## auto_generated
class AirConditioning;

//## auto_generated
class Air_Q_control;

//## auto_generated
class Air_Q_sensor;

//## auto_generated
class Authorization_security_system;

//## auto_generated
class Communication_system;

//## auto_generated
class Control_system;

//## auto_generated
class Fire_sensor;

//## auto_generated
class HVAC_system;

//## auto_generated
class Heating;

//## auto_generated
class Humidity_sensor;

//## auto_generated
class Light_sensor;

//## auto_generated
class Lighting_system;

//## auto_generated
class Pressure_sensor;

//## auto_generated
class Security_system;

//## auto_generated
class Temperature_sensor;

//## auto_generated
class Ventilation;

//## classInstance part_0
class part_0_C;

//## auto_generated
class sensing_system;

//#[ ignore
#define AC_on_Default_id 18601

#define AC_off_Default_id 18602

#define heatingOn_Default_id 18603

#define heatingOff_Default_id 18604
//#]

//## package Default


//## classInstance part_0
extern part_0_C part_0;

//## auto_generated
void Default_initRelations();

//## event AC_on()
class AC_on : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAC_on;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AC_on();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAC_on : virtual public AOMEvent {
    DECLARE_META_EVENT(AC_on)
};
//#]
#endif // _OMINSTRUMENT

//## event AC_off()
class AC_off : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAC_off;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AC_off();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAC_off : virtual public AOMEvent {
    DECLARE_META_EVENT(AC_off)
};
//#]
#endif // _OMINSTRUMENT

//## event heatingOn()
class heatingOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedheatingOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    heatingOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedheatingOn : virtual public AOMEvent {
    DECLARE_META_EVENT(heatingOn)
};
//#]
#endif // _OMINSTRUMENT

//## event heatingOff()
class heatingOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedheatingOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    heatingOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedheatingOff : virtual public AOMEvent {
    DECLARE_META_EVENT(heatingOff)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
