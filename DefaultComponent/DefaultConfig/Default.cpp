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
//## classInstance part_0
#include "part_0.h"
//## auto_generated
#include "Actuation_system.h"
//## auto_generated
#include "Air_Q_control.h"
//## auto_generated
#include "Air_Q_sensor.h"
//## auto_generated
#include "AirConditioning.h"
//## auto_generated
#include "Authorization_security_system.h"
//## auto_generated
#include "Communication_system.h"
//## auto_generated
#include "Control_system.h"
//## auto_generated
#include "Fire_sensor.h"
//## auto_generated
#include "Heating.h"
//## auto_generated
#include "Humidity_sensor.h"
//## auto_generated
#include "HVAC_system.h"
//## auto_generated
#include "Light_sensor.h"
//## auto_generated
#include "Lighting_system.h"
//## auto_generated
#include "Pressure_sensor.h"
//## auto_generated
#include "Security_system.h"
//## auto_generated
#include "sensing_system.h"
//## auto_generated
#include "Temperature_sensor.h"
//## auto_generated
#include "Ventilation.h"
//#[ ignore
#define AC_on_SERIALIZE OM_NO_OP

#define AC_on_UNSERIALIZE OM_NO_OP

#define AC_on_CONSTRUCTOR AC_on()

#define AC_off_SERIALIZE OM_NO_OP

#define AC_off_UNSERIALIZE OM_NO_OP

#define AC_off_CONSTRUCTOR AC_off()

#define heatingOn_SERIALIZE OM_NO_OP

#define heatingOn_UNSERIALIZE OM_NO_OP

#define heatingOn_CONSTRUCTOR heatingOn()

#define heatingOff_SERIALIZE OM_NO_OP

#define heatingOff_UNSERIALIZE OM_NO_OP

#define heatingOff_CONSTRUCTOR heatingOff()
//#]

//## package Default


//## classInstance part_0
part_0_C part_0;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&part_0, part_0, "part_0", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//## event AC_on()
AC_on::AC_on() {
    NOTIFY_EVENT_CONSTRUCTOR(AC_on)
    setId(AC_on_Default_id);
}

bool AC_on::isTypeOf(const short id) const {
    return (AC_on_Default_id==id);
}

IMPLEMENT_META_EVENT_P(AC_on, Default, Default, AC_on())

//## event AC_off()
AC_off::AC_off() {
    NOTIFY_EVENT_CONSTRUCTOR(AC_off)
    setId(AC_off_Default_id);
}

bool AC_off::isTypeOf(const short id) const {
    return (AC_off_Default_id==id);
}

IMPLEMENT_META_EVENT_P(AC_off, Default, Default, AC_off())

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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
