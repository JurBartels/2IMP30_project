/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance AirConditioningPart
#include "AirConditioning.h"
//## classInstance ControlSystemPart
#include "ControlSystem.h"
//## classInstance HeatingPart
#include "Heating.h"
//## classInstance HVACPart
#include "HVAC.h"
//## classInstance TemperatureSensorPart
#include "TemperatureSensor.h"
//## auto_generated
#include "Authorization_security_system.h"
//## auto_generated
#include "Communication_system.h"
//## auto_generated
#include "Fire_sensor.h"
//## auto_generated
#include "Humidity_sensor.h"
//## auto_generated
#include "Light_sensor.h"
//## auto_generated
#include "Lighting_system.h"
//## auto_generated
#include "Pressure_sensor.h"
//## auto_generated
#include "Security_system.h"
//## auto_generated
#include "Ventilation.h"
//#[ ignore
#define heatingOn_SERIALIZE OM_NO_OP

#define heatingOn_UNSERIALIZE OM_NO_OP

#define heatingOn_CONSTRUCTOR heatingOn()

#define heatingOff_SERIALIZE OM_NO_OP

#define heatingOff_UNSERIALIZE OM_NO_OP

#define heatingOff_CONSTRUCTOR heatingOff()

#define heatRoom_SERIALIZE OM_NO_OP

#define heatRoom_UNSERIALIZE OM_NO_OP

#define heatRoom_CONSTRUCTOR heatRoom()

#define coolRoom_SERIALIZE OM_NO_OP

#define coolRoom_UNSERIALIZE OM_NO_OP

#define coolRoom_CONSTRUCTOR coolRoom()

#define acOn_SERIALIZE OM_NO_OP

#define acOn_UNSERIALIZE OM_NO_OP

#define acOn_CONSTRUCTOR acOn()

#define acOff_SERIALIZE OM_NO_OP

#define acOff_UNSERIALIZE OM_NO_OP

#define acOff_CONSTRUCTOR acOff()

#define okTemp_SERIALIZE OM_NO_OP

#define okTemp_UNSERIALIZE OM_NO_OP

#define okTemp_CONSTRUCTOR okTemp()
//#]

//## package Default


//## classInstance AirConditioningPart
AirConditioning AirConditioningPart;

//## classInstance ControlSystemPart
ControlSystem ControlSystemPart;

//## classInstance HVACPart
HVAC HVACPart;

//## classInstance HeatingPart
Heating HeatingPart;

//## classInstance TemperatureSensorPart
TemperatureSensor TemperatureSensorPart;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            ControlSystemPart.setShouldDelete(false);
        }
        {
            HVACPart.setShouldDelete(false);
        }
        {
            HeatingPart.setShouldDelete(false);
        }
        {
            AirConditioningPart.setShouldDelete(false);
        }
    }
    ControlSystemPart.setItsHVAC(&HVACPart);
    ControlSystemPart.setItsTemperatureSensor(&TemperatureSensorPart);
    HeatingPart.setItsHVAC(&HVACPart);
    AirConditioningPart.setItsHVAC(&HVACPart);
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= AirConditioningPart.startBehavior();
    done &= ControlSystemPart.startBehavior();
    done &= HVACPart.startBehavior();
    done &= HeatingPart.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&ControlSystemPart, ControlSystem, "ControlSystemPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&TemperatureSensorPart, TemperatureSensor, "TemperatureSensorPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&HVACPart, HVAC, "HVACPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&HeatingPart, Heating, "HeatingPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&AirConditioningPart, AirConditioning, "AirConditioningPart", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event heatingOn()
heatingOn::heatingOn() {
    NOTIFY_EVENT_CONSTRUCTOR(heatingOn)
    setId(heatingOn_Default_id);
}

bool heatingOn::isTypeOf(const short id) const {
    return (heatingOn_Default_id==id);
}

IMPLEMENT_META_EVENT_P(heatingOn, Default, Default, heatingOn())

//## event heatingOff()
heatingOff::heatingOff() {
    NOTIFY_EVENT_CONSTRUCTOR(heatingOff)
    setId(heatingOff_Default_id);
}

bool heatingOff::isTypeOf(const short id) const {
    return (heatingOff_Default_id==id);
}

IMPLEMENT_META_EVENT_P(heatingOff, Default, Default, heatingOff())

//## event heatRoom()
heatRoom::heatRoom() {
    NOTIFY_EVENT_CONSTRUCTOR(heatRoom)
    setId(heatRoom_Default_id);
}

bool heatRoom::isTypeOf(const short id) const {
    return (heatRoom_Default_id==id);
}

IMPLEMENT_META_EVENT_P(heatRoom, Default, Default, heatRoom())

//## event coolRoom()
coolRoom::coolRoom() {
    NOTIFY_EVENT_CONSTRUCTOR(coolRoom)
    setId(coolRoom_Default_id);
}

bool coolRoom::isTypeOf(const short id) const {
    return (coolRoom_Default_id==id);
}

IMPLEMENT_META_EVENT_P(coolRoom, Default, Default, coolRoom())

//## event acOn()
acOn::acOn() {
    NOTIFY_EVENT_CONSTRUCTOR(acOn)
    setId(acOn_Default_id);
}

bool acOn::isTypeOf(const short id) const {
    return (acOn_Default_id==id);
}

IMPLEMENT_META_EVENT_P(acOn, Default, Default, acOn())

//## event acOff()
acOff::acOff() {
    NOTIFY_EVENT_CONSTRUCTOR(acOff)
    setId(acOff_Default_id);
}

bool acOff::isTypeOf(const short id) const {
    return (acOff_Default_id==id);
}

IMPLEMENT_META_EVENT_P(acOff, Default, Default, acOff())

//## event okTemp()
okTemp::okTemp() {
    NOTIFY_EVENT_CONSTRUCTOR(okTemp)
    setId(okTemp_Default_id);
}

bool okTemp::isTypeOf(const short id) const {
    return (okTemp_Default_id==id);
}

IMPLEMENT_META_EVENT_P(okTemp, Default, Default, okTemp())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
