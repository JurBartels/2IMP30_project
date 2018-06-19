/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Control_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Control_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Control_system.h"
//## link itsActuation_system
#include "Actuation_system.h"
//## link itsAir_Q_control
#include "Air_Q_control.h"
//## link itsAir_Q_sensor
#include "Air_Q_sensor.h"
//## link itsFire_sensor
#include "Fire_sensor.h"
//## link itsHVAC_system
#include "HVAC_system.h"
//## link itsLight_sensor
#include "Light_sensor.h"
//## link itsLighting_system
#include "Lighting_system.h"
//## link itsTemperature_sensor
#include "Temperature_sensor.h"
//#[ ignore
#define Default_Control_system_Control_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Control_system
Control_system::Control_system() {
    NOTIFY_CONSTRUCTOR(Control_system, Control_system(), 0, Default_Control_system_Control_system_SERIALIZE);
    itsActuation_system = NULL;
    itsAir_Q_control = NULL;
    itsAir_Q_sensor = NULL;
    itsFire_sensor = NULL;
    itsHVAC_system = NULL;
    itsLight_sensor = NULL;
    itsLighting_system = NULL;
    itsSensing_system = NULL;
    itsSensing_system_2 = NULL;
    itsTemperature_sensor = NULL;
}

Control_system::~Control_system() {
    NOTIFY_DESTRUCTOR(~Control_system, false);
    cleanUpRelations();
}

Actuation_system* Control_system::getItsActuation_system() const {
    return itsActuation_system;
}

void Control_system::setItsActuation_system(Actuation_system* p_Actuation_system) {
    if(p_Actuation_system != NULL)
        {
            p_Actuation_system->_setItsControl_system(this);
        }
    _setItsActuation_system(p_Actuation_system);
}

Air_Q_control* Control_system::getItsAir_Q_control() const {
    return itsAir_Q_control;
}

void Control_system::setItsAir_Q_control(Air_Q_control* p_Air_Q_control) {
    if(p_Air_Q_control != NULL)
        {
            p_Air_Q_control->_setItsControl_system(this);
        }
    _setItsAir_Q_control(p_Air_Q_control);
}

Air_Q_sensor* Control_system::getItsAir_Q_sensor() const {
    return itsAir_Q_sensor;
}

void Control_system::setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor) {
    if(p_Air_Q_sensor != NULL)
        {
            p_Air_Q_sensor->_setItsControl_system(this);
        }
    _setItsAir_Q_sensor(p_Air_Q_sensor);
}

Fire_sensor* Control_system::getItsFire_sensor() const {
    return itsFire_sensor;
}

void Control_system::setItsFire_sensor(Fire_sensor* p_Fire_sensor) {
    if(p_Fire_sensor != NULL)
        {
            p_Fire_sensor->_setItsControl_system(this);
        }
    _setItsFire_sensor(p_Fire_sensor);
}

HVAC_system* Control_system::getItsHVAC_system() const {
    return itsHVAC_system;
}

void Control_system::setItsHVAC_system(HVAC_system* p_HVAC_system) {
    if(p_HVAC_system != NULL)
        {
            p_HVAC_system->_setItsControl_system(this);
        }
    _setItsHVAC_system(p_HVAC_system);
}

Light_sensor* Control_system::getItsLight_sensor() const {
    return itsLight_sensor;
}

void Control_system::setItsLight_sensor(Light_sensor* p_Light_sensor) {
    if(p_Light_sensor != NULL)
        {
            p_Light_sensor->_setItsControl_system(this);
        }
    _setItsLight_sensor(p_Light_sensor);
}

Lighting_system* Control_system::getItsLighting_system() const {
    return itsLighting_system;
}

void Control_system::setItsLighting_system(Lighting_system* p_Lighting_system) {
    if(p_Lighting_system != NULL)
        {
            p_Lighting_system->_setItsControl_system(this);
        }
    _setItsLighting_system(p_Lighting_system);
}

sensing_system* Control_system::getItsSensing_system() const {
    return itsSensing_system;
}

void Control_system::setItsSensing_system(sensing_system* p_sensing_system) {
    if(p_sensing_system != NULL)
        {
            p_sensing_system->_setItsControl_system(this);
        }
    _setItsSensing_system(p_sensing_system);
}

sensing_system* Control_system::getItsSensing_system_2() const {
    return itsSensing_system_2;
}

void Control_system::setItsSensing_system_2(sensing_system* p_sensing_system) {
    if(p_sensing_system != NULL)
        {
            p_sensing_system->_setItsControl_system_1(this);
        }
    _setItsSensing_system_2(p_sensing_system);
}

Temperature_sensor* Control_system::getItsTemperature_sensor() const {
    return itsTemperature_sensor;
}

void Control_system::setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor) {
    if(p_Temperature_sensor != NULL)
        {
            p_Temperature_sensor->_setItsControl_system(this);
        }
    _setItsTemperature_sensor(p_Temperature_sensor);
}

void Control_system::cleanUpRelations() {
    if(itsActuation_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsActuation_system");
            Control_system* p_Control_system = itsActuation_system->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsActuation_system->__setItsControl_system(NULL);
                }
            itsActuation_system = NULL;
        }
    if(itsAir_Q_control != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAir_Q_control");
            Control_system* p_Control_system = itsAir_Q_control->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsAir_Q_control->__setItsControl_system(NULL);
                }
            itsAir_Q_control = NULL;
        }
    if(itsAir_Q_sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAir_Q_sensor");
            Control_system* p_Control_system = itsAir_Q_sensor->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsAir_Q_sensor->__setItsControl_system(NULL);
                }
            itsAir_Q_sensor = NULL;
        }
    if(itsFire_sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsFire_sensor");
            Control_system* p_Control_system = itsFire_sensor->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsFire_sensor->__setItsControl_system(NULL);
                }
            itsFire_sensor = NULL;
        }
    if(itsHVAC_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_system");
            Control_system* p_Control_system = itsHVAC_system->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsHVAC_system->__setItsControl_system(NULL);
                }
            itsHVAC_system = NULL;
        }
    if(itsLight_sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLight_sensor");
            Control_system* p_Control_system = itsLight_sensor->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsLight_sensor->__setItsControl_system(NULL);
                }
            itsLight_sensor = NULL;
        }
    if(itsLighting_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLighting_system");
            Control_system* p_Control_system = itsLighting_system->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsLighting_system->__setItsControl_system(NULL);
                }
            itsLighting_system = NULL;
        }
    if(itsSensing_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system");
            Control_system* p_Control_system = itsSensing_system->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsSensing_system->__setItsControl_system(NULL);
                }
            itsSensing_system = NULL;
        }
    if(itsSensing_system_2 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system_2");
            Control_system* p_Control_system = itsSensing_system_2->getItsControl_system_1();
            if(p_Control_system != NULL)
                {
                    itsSensing_system_2->__setItsControl_system_1(NULL);
                }
            itsSensing_system_2 = NULL;
        }
    if(itsTemperature_sensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
            Control_system* p_Control_system = itsTemperature_sensor->getItsControl_system();
            if(p_Control_system != NULL)
                {
                    itsTemperature_sensor->__setItsControl_system(NULL);
                }
            itsTemperature_sensor = NULL;
        }
}

void Control_system::__setItsActuation_system(Actuation_system* p_Actuation_system) {
    itsActuation_system = p_Actuation_system;
    if(p_Actuation_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsActuation_system", p_Actuation_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsActuation_system");
        }
}

void Control_system::_setItsActuation_system(Actuation_system* p_Actuation_system) {
    if(itsActuation_system != NULL)
        {
            itsActuation_system->__setItsControl_system(NULL);
        }
    __setItsActuation_system(p_Actuation_system);
}

void Control_system::_clearItsActuation_system() {
    NOTIFY_RELATION_CLEARED("itsActuation_system");
    itsActuation_system = NULL;
}

void Control_system::__setItsAir_Q_control(Air_Q_control* p_Air_Q_control) {
    itsAir_Q_control = p_Air_Q_control;
    if(p_Air_Q_control != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAir_Q_control", p_Air_Q_control, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAir_Q_control");
        }
}

void Control_system::_setItsAir_Q_control(Air_Q_control* p_Air_Q_control) {
    if(itsAir_Q_control != NULL)
        {
            itsAir_Q_control->__setItsControl_system(NULL);
        }
    __setItsAir_Q_control(p_Air_Q_control);
}

void Control_system::_clearItsAir_Q_control() {
    NOTIFY_RELATION_CLEARED("itsAir_Q_control");
    itsAir_Q_control = NULL;
}

void Control_system::__setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor) {
    itsAir_Q_sensor = p_Air_Q_sensor;
    if(p_Air_Q_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAir_Q_sensor", p_Air_Q_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAir_Q_sensor");
        }
}

void Control_system::_setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor) {
    if(itsAir_Q_sensor != NULL)
        {
            itsAir_Q_sensor->__setItsControl_system(NULL);
        }
    __setItsAir_Q_sensor(p_Air_Q_sensor);
}

void Control_system::_clearItsAir_Q_sensor() {
    NOTIFY_RELATION_CLEARED("itsAir_Q_sensor");
    itsAir_Q_sensor = NULL;
}

void Control_system::__setItsFire_sensor(Fire_sensor* p_Fire_sensor) {
    itsFire_sensor = p_Fire_sensor;
    if(p_Fire_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsFire_sensor", p_Fire_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsFire_sensor");
        }
}

void Control_system::_setItsFire_sensor(Fire_sensor* p_Fire_sensor) {
    if(itsFire_sensor != NULL)
        {
            itsFire_sensor->__setItsControl_system(NULL);
        }
    __setItsFire_sensor(p_Fire_sensor);
}

void Control_system::_clearItsFire_sensor() {
    NOTIFY_RELATION_CLEARED("itsFire_sensor");
    itsFire_sensor = NULL;
}

void Control_system::__setItsHVAC_system(HVAC_system* p_HVAC_system) {
    itsHVAC_system = p_HVAC_system;
    if(p_HVAC_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC_system", p_HVAC_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC_system");
        }
}

void Control_system::_setItsHVAC_system(HVAC_system* p_HVAC_system) {
    if(itsHVAC_system != NULL)
        {
            itsHVAC_system->__setItsControl_system(NULL);
        }
    __setItsHVAC_system(p_HVAC_system);
}

void Control_system::_clearItsHVAC_system() {
    NOTIFY_RELATION_CLEARED("itsHVAC_system");
    itsHVAC_system = NULL;
}

void Control_system::__setItsLight_sensor(Light_sensor* p_Light_sensor) {
    itsLight_sensor = p_Light_sensor;
    if(p_Light_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLight_sensor", p_Light_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLight_sensor");
        }
}

void Control_system::_setItsLight_sensor(Light_sensor* p_Light_sensor) {
    if(itsLight_sensor != NULL)
        {
            itsLight_sensor->__setItsControl_system(NULL);
        }
    __setItsLight_sensor(p_Light_sensor);
}

void Control_system::_clearItsLight_sensor() {
    NOTIFY_RELATION_CLEARED("itsLight_sensor");
    itsLight_sensor = NULL;
}

void Control_system::__setItsLighting_system(Lighting_system* p_Lighting_system) {
    itsLighting_system = p_Lighting_system;
    if(p_Lighting_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLighting_system", p_Lighting_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLighting_system");
        }
}

void Control_system::_setItsLighting_system(Lighting_system* p_Lighting_system) {
    if(itsLighting_system != NULL)
        {
            itsLighting_system->__setItsControl_system(NULL);
        }
    __setItsLighting_system(p_Lighting_system);
}

void Control_system::_clearItsLighting_system() {
    NOTIFY_RELATION_CLEARED("itsLighting_system");
    itsLighting_system = NULL;
}

void Control_system::__setItsSensing_system(sensing_system* p_sensing_system) {
    itsSensing_system = p_sensing_system;
    if(p_sensing_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensing_system", p_sensing_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system");
        }
}

void Control_system::_setItsSensing_system(sensing_system* p_sensing_system) {
    if(itsSensing_system != NULL)
        {
            itsSensing_system->__setItsControl_system(NULL);
        }
    __setItsSensing_system(p_sensing_system);
}

void Control_system::_clearItsSensing_system() {
    NOTIFY_RELATION_CLEARED("itsSensing_system");
    itsSensing_system = NULL;
}

void Control_system::__setItsSensing_system_2(sensing_system* p_sensing_system) {
    itsSensing_system_2 = p_sensing_system;
    if(p_sensing_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensing_system_2", p_sensing_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system_2");
        }
}

void Control_system::_setItsSensing_system_2(sensing_system* p_sensing_system) {
    if(itsSensing_system_2 != NULL)
        {
            itsSensing_system_2->__setItsControl_system_1(NULL);
        }
    __setItsSensing_system_2(p_sensing_system);
}

void Control_system::_clearItsSensing_system_2() {
    NOTIFY_RELATION_CLEARED("itsSensing_system_2");
    itsSensing_system_2 = NULL;
}

void Control_system::__setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor) {
    itsTemperature_sensor = p_Temperature_sensor;
    if(p_Temperature_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTemperature_sensor", p_Temperature_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
        }
}

void Control_system::_setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor) {
    if(itsTemperature_sensor != NULL)
        {
            itsTemperature_sensor->__setItsControl_system(NULL);
        }
    __setItsTemperature_sensor(p_Temperature_sensor);
}

void Control_system::_clearItsTemperature_sensor() {
    NOTIFY_RELATION_CLEARED("itsTemperature_sensor");
    itsTemperature_sensor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedControl_system::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsensing_system::serializeAttributes(aomsAttributes);
}

void OMAnimatedControl_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensing_system", false, true);
    if(myReal->itsSensing_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensing_system);
        }
    aomsRelations->addRelation("itsActuation_system", false, true);
    if(myReal->itsActuation_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsActuation_system);
        }
    aomsRelations->addRelation("itsSensing_system_2", false, true);
    if(myReal->itsSensing_system_2)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensing_system_2);
        }
    aomsRelations->addRelation("itsLight_sensor", false, true);
    if(myReal->itsLight_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsLight_sensor);
        }
    aomsRelations->addRelation("itsLighting_system", false, true);
    if(myReal->itsLighting_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsLighting_system);
        }
    aomsRelations->addRelation("itsAir_Q_sensor", false, true);
    if(myReal->itsAir_Q_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsAir_Q_sensor);
        }
    aomsRelations->addRelation("itsAir_Q_control", false, true);
    if(myReal->itsAir_Q_control)
        {
            aomsRelations->ADD_ITEM(myReal->itsAir_Q_control);
        }
    aomsRelations->addRelation("itsFire_sensor", false, true);
    if(myReal->itsFire_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsFire_sensor);
        }
    aomsRelations->addRelation("itsTemperature_sensor", false, true);
    if(myReal->itsTemperature_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsTemperature_sensor);
        }
    aomsRelations->addRelation("itsHVAC_system", false, true);
    if(myReal->itsHVAC_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC_system);
        }
    OMAnimatedsensing_system::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Control_system, Default, false, sensing_system, OMAnimatedsensing_system, OMAnimatedControl_system)

OMINIT_SUPERCLASS(sensing_system, OMAnimatedsensing_system)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Control_system.cpp
*********************************************************************/
