/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC_system.h"
//## link itsAirConditioning
#include "AirConditioning.h"
//## link itsControl_system
#include "Control_system.h"
//## link itsHeating
#include "Heating.h"
//## link itsVentilation
#include "Ventilation.h"
//#[ ignore
#define Default_HVAC_system_HVAC_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class HVAC_system
HVAC_system::HVAC_system() : AC_state(false) {
    NOTIFY_CONSTRUCTOR(HVAC_system, HVAC_system(), 0, Default_HVAC_system_HVAC_system_SERIALIZE);
    itsAirConditioning = NULL;
    itsControl_system = NULL;
    itsHeating = NULL;
    itsVentilation = NULL;
}

HVAC_system::~HVAC_system() {
    NOTIFY_DESTRUCTOR(~HVAC_system, true);
    cleanUpRelations();
}

bool HVAC_system::getAC_state() const {
    return AC_state;
}

void HVAC_system::setAC_state(bool p_AC_state) {
    AC_state = p_AC_state;
}

AirConditioning* HVAC_system::getItsAirConditioning() const {
    return itsAirConditioning;
}

void HVAC_system::setItsAirConditioning(AirConditioning* p_AirConditioning) {
    if(p_AirConditioning != NULL)
        {
            p_AirConditioning->_setItsHVAC_system(this);
        }
    _setItsAirConditioning(p_AirConditioning);
}

Control_system* HVAC_system::getItsControl_system() const {
    return itsControl_system;
}

void HVAC_system::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsHVAC_system(this);
        }
    _setItsControl_system(p_Control_system);
}

Heating* HVAC_system::getItsHeating() const {
    return itsHeating;
}

void HVAC_system::setItsHeating(Heating* p_Heating) {
    itsHeating = p_Heating;
    if(p_Heating != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHeating", p_Heating, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHeating");
        }
}

Ventilation* HVAC_system::getItsVentilation() const {
    return itsVentilation;
}

void HVAC_system::setItsVentilation(Ventilation* p_Ventilation) {
    if(p_Ventilation != NULL)
        {
            p_Ventilation->_setItsHVAC_system(this);
        }
    _setItsVentilation(p_Ventilation);
}

void HVAC_system::cleanUpRelations() {
    if(itsAirConditioning != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAirConditioning");
            HVAC_system* p_HVAC_system = itsAirConditioning->getItsHVAC_system();
            if(p_HVAC_system != NULL)
                {
                    itsAirConditioning->__setItsHVAC_system(NULL);
                }
            itsAirConditioning = NULL;
        }
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            HVAC_system* p_HVAC_system = itsControl_system->getItsHVAC_system();
            if(p_HVAC_system != NULL)
                {
                    itsControl_system->__setItsHVAC_system(NULL);
                }
            itsControl_system = NULL;
        }
    if(itsHeating != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeating");
            itsHeating = NULL;
        }
    if(itsVentilation != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVentilation");
            HVAC_system* p_HVAC_system = itsVentilation->getItsHVAC_system();
            if(p_HVAC_system != NULL)
                {
                    itsVentilation->__setItsHVAC_system(NULL);
                }
            itsVentilation = NULL;
        }
}

void HVAC_system::__setItsAirConditioning(AirConditioning* p_AirConditioning) {
    itsAirConditioning = p_AirConditioning;
    if(p_AirConditioning != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAirConditioning", p_AirConditioning, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAirConditioning");
        }
}

void HVAC_system::_setItsAirConditioning(AirConditioning* p_AirConditioning) {
    if(itsAirConditioning != NULL)
        {
            itsAirConditioning->__setItsHVAC_system(NULL);
        }
    __setItsAirConditioning(p_AirConditioning);
}

void HVAC_system::_clearItsAirConditioning() {
    NOTIFY_RELATION_CLEARED("itsAirConditioning");
    itsAirConditioning = NULL;
}

void HVAC_system::__setItsControl_system(Control_system* p_Control_system) {
    itsControl_system = p_Control_system;
    if(p_Control_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsControl_system", p_Control_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
        }
}

void HVAC_system::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsHVAC_system(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void HVAC_system::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

void HVAC_system::__setItsVentilation(Ventilation* p_Ventilation) {
    itsVentilation = p_Ventilation;
    if(p_Ventilation != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsVentilation", p_Ventilation, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsVentilation");
        }
}

void HVAC_system::_setItsVentilation(Ventilation* p_Ventilation) {
    if(itsVentilation != NULL)
        {
            itsVentilation->__setItsHVAC_system(NULL);
        }
    __setItsVentilation(p_Ventilation);
}

void HVAC_system::_clearItsVentilation() {
    NOTIFY_RELATION_CLEARED("itsVentilation");
    itsVentilation = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC_system::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("AC_state", x2String(myReal->AC_state));
}

void OMAnimatedHVAC_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
    aomsRelations->addRelation("itsHeating", false, true);
    if(myReal->itsHeating)
        {
            aomsRelations->ADD_ITEM(myReal->itsHeating);
        }
    aomsRelations->addRelation("itsAirConditioning", false, true);
    if(myReal->itsAirConditioning)
        {
            aomsRelations->ADD_ITEM(myReal->itsAirConditioning);
        }
    aomsRelations->addRelation("itsVentilation", false, true);
    if(myReal->itsVentilation)
        {
            aomsRelations->ADD_ITEM(myReal->itsVentilation);
        }
}
//#]

IMPLEMENT_META_P(HVAC_system, Default, Default, false, OMAnimatedHVAC_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.cpp
*********************************************************************/
