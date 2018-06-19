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

#define _OMSTATECHART_ANIMATED
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
HVAC_system::HVAC_system(IOxfActive* theActiveContext) : AC_state(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(HVAC_system, HVAC_system(), 0, Default_HVAC_system_HVAC_system_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsAirConditioning = NULL;
    itsControl_system = NULL;
    itsHeating = NULL;
    itsVentilation = NULL;
    initStatechart();
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

bool HVAC_system::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void HVAC_system::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
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

void HVAC_system::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus HVAC_system::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(heatRoom_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    itsHeating->GEN(heatingOn);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(coolRoom_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    pushNullTransition();
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    itsAirConditioning->GEN(acOn);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State HeatRoom
        case HeatRoom:
        {
            if(IS_EVENT_TYPE_OF(coolRoom_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.HeatRoom");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_3");
                    pushNullTransition();
                    rootState_subState = sendaction_3;
                    rootState_active = sendaction_3;
                    //#[ state sendaction_3.(Entry) 
                    itsAirConditioning->GEN(acOn);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(okTemp_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.HeatRoom");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    itsHeating->GEN(heatingOff);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CoolRoom
        case CoolRoom:
        {
            if(IS_EVENT_TYPE_OF(heatRoom_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_STATE_EXITED("ROOT.CoolRoom");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_4");
                    pushNullTransition();
                    rootState_subState = sendaction_4;
                    rootState_active = sendaction_4;
                    //#[ state sendaction_4.(Entry) 
                    itsHeating->GEN(heatingOn);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(okTemp_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.CoolRoom");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_7");
                    pushNullTransition();
                    rootState_subState = sendaction_7;
                    rootState_active = sendaction_7;
                    //#[ state sendaction_7.(Entry) 
                    itsHeating->GEN(heatingOff);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_3
        case sendaction_3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_3");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_5");
                    pushNullTransition();
                    rootState_subState = sendaction_5;
                    rootState_active = sendaction_5;
                    //#[ state sendaction_5.(Entry) 
                    itsHeating->GEN(heatingOff);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_4
        case sendaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_4");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_6");
                    pushNullTransition();
                    rootState_subState = sendaction_6;
                    rootState_active = sendaction_6;
                    //#[ state sendaction_6.(Entry) 
                    itsAirConditioning->GEN(acOff);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_5
        case sendaction_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_5");
                    NOTIFY_STATE_ENTERED("ROOT.CoolRoom");
                    rootState_subState = CoolRoom;
                    rootState_active = CoolRoom;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_6
        case sendaction_6:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_6");
                    NOTIFY_STATE_ENTERED("ROOT.HeatRoom");
                    rootState_subState = HeatRoom;
                    rootState_active = HeatRoom;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_7
        case sendaction_7:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_7");
                    NOTIFY_STATE_ENTERED("ROOT.sendaction_8");
                    pushNullTransition();
                    rootState_subState = sendaction_8;
                    rootState_active = sendaction_8;
                    //#[ state sendaction_8.(Entry) 
                    itsAirConditioning->GEN(acOff);
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
        }
        break;
        // State sendaction_8
        case sendaction_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.sendaction_8");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
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

void OMAnimatedHVAC_system::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case HVAC_system::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case HVAC_system::HeatRoom:
        {
            HeatRoom_serializeStates(aomsState);
        }
        break;
        case HVAC_system::CoolRoom:
        {
            CoolRoom_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_3:
        {
            sendaction_3_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_4:
        {
            sendaction_4_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_5:
        {
            sendaction_5_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_6:
        {
            sendaction_6_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_7:
        {
            sendaction_7_serializeStates(aomsState);
        }
        break;
        case HVAC_system::sendaction_8:
        {
            sendaction_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHVAC_system::sendaction_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_8");
}

void OMAnimatedHVAC_system::sendaction_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_7");
}

void OMAnimatedHVAC_system::sendaction_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_6");
}

void OMAnimatedHVAC_system::sendaction_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_5");
}

void OMAnimatedHVAC_system::sendaction_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_4");
}

void OMAnimatedHVAC_system::sendaction_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.sendaction_3");
}

void OMAnimatedHVAC_system::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}

void OMAnimatedHVAC_system::HeatRoom_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.HeatRoom");
}

void OMAnimatedHVAC_system::CoolRoom_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CoolRoom");
}
//#]

IMPLEMENT_REACTIVE_META_P(HVAC_system, Default, Default, false, OMAnimatedHVAC_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.cpp
*********************************************************************/
