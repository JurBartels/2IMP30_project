/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 28, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance AirConditioningPart
#include "AirConditioning.h"
//## classInstance AirQualityControllerPart
#include "AirQualityController.h"
//## classInstance HeatingPart
#include "Heating.h"
//## classInstance HumiditySensorPart
#include "HumiditySensor.h"
//## classInstance HVACPart
#include "HVAC.h"
//## classInstance LightingControllerPart
#include "LightingController.h"
//## classInstance PresenceSensorPart
#include "PresenceSensor.h"
//## classInstance TemperatureControllerPart
#include "TemperatureController.h"
//## classInstance TemperatureSensorPart
#include "TemperatureSensor.h"
//## classInstance VentilationPart
#include "Ventilation.h"
//## auto_generated
#include "Authorization_security_system.h"
//## auto_generated
#include "Communication_system.h"
//## auto_generated
#include "Fire_sensor.h"
//## auto_generated
#include "Pressure_sensor.h"
//## auto_generated
#include "Security_system.h"
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

#define ventilationOn_SERIALIZE OM_NO_OP

#define ventilationOn_UNSERIALIZE OM_NO_OP

#define ventilationOn_CONSTRUCTOR ventilationOn()

#define ventilationOff_SERIALIZE OM_NO_OP

#define ventilationOff_UNSERIALIZE OM_NO_OP

#define ventilationOff_CONSTRUCTOR ventilationOff()

#define itsPre_SERIALIZE OM_NO_OP

#define itsPre_UNSERIALIZE OM_NO_OP

#define itsPre_CONSTRUCTOR itsPre()

#define closeAll_SERIALIZE OM_NO_OP

#define closeAll_UNSERIALIZE OM_NO_OP

#define closeAll_CONSTRUCTOR closeAll()
//#]

//## package Default


//## classInstance AirConditioningPart
AirConditioning AirConditioningPart;

//## classInstance AirQualityControllerPart
AirQualityController AirQualityControllerPart;

//## classInstance HVACPart
HVAC HVACPart;

//## classInstance HeatingPart
Heating HeatingPart;

//## classInstance HumiditySensorPart
HumiditySensor HumiditySensorPart;

//## classInstance LightingControllerPart
LightingController LightingControllerPart;

//## classInstance PresenceSensorPart
PresenceSensor PresenceSensorPart;

//## classInstance TemperatureControllerPart
TemperatureController TemperatureControllerPart;

//## classInstance TemperatureSensorPart
TemperatureSensor TemperatureSensorPart;

//## classInstance VentilationPart
Ventilation VentilationPart;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            TemperatureControllerPart.setShouldDelete(false);
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
        {
            VentilationPart.setShouldDelete(false);
        }
        {
            AirQualityControllerPart.setShouldDelete(false);
        }
        {
            LightingControllerPart.setShouldDelete(false);
        }
    }
    TemperatureControllerPart.setItsHVAC(&HVACPart);
    TemperatureControllerPart.setItsTemperatureSensor(&TemperatureSensorPart);
    HeatingPart.setItsHVAC(&HVACPart);
    AirConditioningPart.setItsHVAC(&HVACPart);
    VentilationPart.setItsAirQualityController(&AirQualityControllerPart);
    HumiditySensorPart.setItsAirQualityController(&AirQualityControllerPart);
    PresenceSensorPart.setItsLightingController(&LightingControllerPart);
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= AirConditioningPart.startBehavior();
    done &= AirQualityControllerPart.startBehavior();
    done &= HVACPart.startBehavior();
    done &= HeatingPart.startBehavior();
    done &= LightingControllerPart.startBehavior();
    done &= TemperatureControllerPart.startBehavior();
    done &= TemperatureSensorPart.startBehavior();
    done &= VentilationPart.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&TemperatureControllerPart, TemperatureController, "TemperatureControllerPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&TemperatureSensorPart, TemperatureSensor, "TemperatureSensorPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&HVACPart, HVAC, "HVACPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&HeatingPart, Heating, "HeatingPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&AirConditioningPart, AirConditioning, "AirConditioningPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&VentilationPart, Ventilation, "VentilationPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&HumiditySensorPart, HumiditySensor, "HumiditySensorPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&AirQualityControllerPart, AirQualityController, "AirQualityControllerPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&LightingControllerPart, LightingController, "LightingControllerPart", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&PresenceSensorPart, PresenceSensor, "PresenceSensorPart", AOMNoMultiplicity);
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

//## event ventilationOn()
ventilationOn::ventilationOn() {
    NOTIFY_EVENT_CONSTRUCTOR(ventilationOn)
    setId(ventilationOn_Default_id);
}

bool ventilationOn::isTypeOf(const short id) const {
    return (ventilationOn_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ventilationOn, Default, Default, ventilationOn())

//## event ventilationOff()
ventilationOff::ventilationOff() {
    NOTIFY_EVENT_CONSTRUCTOR(ventilationOff)
    setId(ventilationOff_Default_id);
}

bool ventilationOff::isTypeOf(const short id) const {
    return (ventilationOff_Default_id==id);
}

IMPLEMENT_META_EVENT_P(ventilationOff, Default, Default, ventilationOff())

//## event itsPre()
itsPre::itsPre() {
    NOTIFY_EVENT_CONSTRUCTOR(itsPre)
    setId(itsPre_Default_id);
}

bool itsPre::isTypeOf(const short id) const {
    return (itsPre_Default_id==id);
}

IMPLEMENT_META_EVENT_P(itsPre, Default, Default, itsPre())

//## event closeAll()
closeAll::closeAll() {
    NOTIFY_EVENT_CONSTRUCTOR(closeAll)
    setId(closeAll_Default_id);
}

bool closeAll::isTypeOf(const short id) const {
    return (closeAll_Default_id==id);
}

IMPLEMENT_META_EVENT_P(closeAll, Default, Default, closeAll())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
