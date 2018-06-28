/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 28, Jun 2018  
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
#include "winsock2.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "windows.h"
//## auto_generated
#include "iostream"
//## auto_generated
#include "Ws2tcpip.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include <oxf\event.h>
//## classInstance AirConditioningPart
class AirConditioning;

//## classInstance AirQualityControllerPart
class AirQualityController;

//## auto_generated
class Authorization_security_system;

//## auto_generated
class Communication_system;

//## auto_generated
class Fire_sensor;

//## classInstance HVACPart
class HVAC;

//## classInstance HeatingPart
class Heating;

//## classInstance HumiditySensorPart
class HumiditySensor;

//## classInstance LightingControllerPart
class LightingController;

//## classInstance PresenceSensorPart
class PresenceSensor;

//## auto_generated
class Pressure_sensor;

//## auto_generated
class Security_system;

//## classInstance TemperatureControllerPart
class TemperatureController;

//## classInstance TemperatureSensorPart
class TemperatureSensor;

//## classInstance VentilationPart
class Ventilation;

//#[ ignore
#define heatingOn_Default_id 18601

#define heatingOff_Default_id 18602

#define heatRoom_Default_id 18603

#define coolRoom_Default_id 18604

#define acOn_Default_id 18605

#define acOff_Default_id 18606

#define okTemp_Default_id 18607

#define ventilationOn_Default_id 18608

#define ventilationOff_Default_id 18609

#define itsPre_Default_id 18610

#define closeAll_Default_id 18611
//#]

//## package Default


//#[ type DEFAULT_BUFLEN
#define DEFAULT_BUFLEN 1024
//#]

//## classInstance AirConditioningPart
extern AirConditioning AirConditioningPart;

//## classInstance AirQualityControllerPart
extern AirQualityController AirQualityControllerPart;

//## classInstance HVACPart
extern HVAC HVACPart;

//## classInstance HeatingPart
extern Heating HeatingPart;

//## classInstance HumiditySensorPart
extern HumiditySensor HumiditySensorPart;

//## classInstance LightingControllerPart
extern LightingController LightingControllerPart;

//## classInstance PresenceSensorPart
extern PresenceSensor PresenceSensorPart;

//## classInstance TemperatureControllerPart
extern TemperatureController TemperatureControllerPart;

//## classInstance TemperatureSensorPart
extern TemperatureSensor TemperatureSensorPart;

//## classInstance VentilationPart
extern Ventilation VentilationPart;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

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

//## event heatRoom()
class heatRoom : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedheatRoom;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    heatRoom();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedheatRoom : virtual public AOMEvent {
    DECLARE_META_EVENT(heatRoom)
};
//#]
#endif // _OMINSTRUMENT

//## event coolRoom()
class coolRoom : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcoolRoom;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    coolRoom();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcoolRoom : virtual public AOMEvent {
    DECLARE_META_EVENT(coolRoom)
};
//#]
#endif // _OMINSTRUMENT

//## event acOn()
class acOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedacOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    acOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedacOn : virtual public AOMEvent {
    DECLARE_META_EVENT(acOn)
};
//#]
#endif // _OMINSTRUMENT

//## event acOff()
class acOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedacOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    acOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedacOff : virtual public AOMEvent {
    DECLARE_META_EVENT(acOff)
};
//#]
#endif // _OMINSTRUMENT

//## event okTemp()
class okTemp : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedokTemp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    okTemp();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedokTemp : virtual public AOMEvent {
    DECLARE_META_EVENT(okTemp)
};
//#]
#endif // _OMINSTRUMENT

//## event ventilationOn()
class ventilationOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedventilationOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ventilationOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedventilationOn : virtual public AOMEvent {
    DECLARE_META_EVENT(ventilationOn)
};
//#]
#endif // _OMINSTRUMENT

//## event ventilationOff()
class ventilationOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedventilationOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ventilationOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedventilationOff : virtual public AOMEvent {
    DECLARE_META_EVENT(ventilationOff)
};
//#]
#endif // _OMINSTRUMENT

//## event itsPre()
class itsPre : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateditsPre;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    itsPre();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateditsPre : virtual public AOMEvent {
    DECLARE_META_EVENT(itsPre)
};
//#]
#endif // _OMINSTRUMENT

//## event closeAll()
class closeAll : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcloseAll;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    closeAll();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcloseAll : virtual public AOMEvent {
    DECLARE_META_EVENT(closeAll)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
