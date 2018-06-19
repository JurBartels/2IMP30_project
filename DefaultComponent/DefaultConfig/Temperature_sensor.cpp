/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Temperature_sensor.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Temperature_sensor_Temperature_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Temperature_sensor
Temperature_sensor::Temperature_sensor(IOxfActive* theActiveContext) : temp(25) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Temperature_sensor, Temperature_sensor(), 0, Default_Temperature_sensor_Temperature_sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsControl_system = NULL;
    initStatechart();
}

Temperature_sensor::~Temperature_sensor() {
    NOTIFY_DESTRUCTOR(~Temperature_sensor, true);
    cleanUpRelations();
    cancelTimeouts();
}

int Temperature_sensor::getTemp() const {
    return temp;
}

void Temperature_sensor::setTemp(int p_temp) {
    temp = p_temp;
    NOTIFY_SET_OPERATION;
}

Control_system* Temperature_sensor::getItsControl_system() const {
    return itsControl_system;
}

void Temperature_sensor::setItsControl_system(Control_system* p_Control_system) {
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

bool Temperature_sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Temperature_sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Temperature_sensor::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            itsControl_system = NULL;
        }
}

void Temperature_sensor::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Temperature_sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Temperature_sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.getTemperature");
        rootState_subState = getTemperature;
        rootState_active = getTemperature;
        rootState_timeout = scheduleTimeout(1000, "ROOT.getTemperature");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Temperature_sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State getTemperature
        case getTemperature:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.getTemperature");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_1");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_1;
                            rootState_active = accepttimeevent_1;
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case accepttimeevent_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_1");
                    NOTIFY_STATE_ENTERED("ROOT.getTemperature");
                    rootState_subState = getTemperature;
                    rootState_active = getTemperature;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.getTemperature");
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedTemperature_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
}

void OMAnimatedTemperature_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}

void OMAnimatedTemperature_sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Temperature_sensor::getTemperature:
        {
            getTemperature_serializeStates(aomsState);
        }
        break;
        case Temperature_sensor::accepttimeevent_1:
        {
            accepttimeevent_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTemperature_sensor::getTemperature_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.getTemperature");
}

void OMAnimatedTemperature_sensor::accepttimeevent_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(Temperature_sensor, Default, Default, false, OMAnimatedTemperature_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.cpp
*********************************************************************/
