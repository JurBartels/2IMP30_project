/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_sensor
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Pressure_sensor.h"
//#[ ignore
#define Default_Pressure_sensor_Pressure_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Pressure_sensor
Pressure_sensor::Pressure_sensor(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Pressure_sensor, Pressure_sensor(), 0, Default_Pressure_sensor_Pressure_sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Pressure_sensor::~Pressure_sensor() {
    NOTIFY_DESTRUCTOR(~Pressure_sensor, true);
    cancelTimeouts();
}

int Pressure_sensor::getPressure() const {
    return pressure;
}

void Pressure_sensor::setPressure(int p_pressure) {
    pressure = p_pressure;
    NOTIFY_SET_OPERATION;
}

bool Pressure_sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Pressure_sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Pressure_sensor::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Pressure_sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Pressure_sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.getPressure");
        rootState_subState = getPressure;
        rootState_active = getPressure;
        rootState_timeout = scheduleTimeout(1000, "ROOT.getPressure");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Pressure_sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State getPressure
        case getPressure:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.getPressure");
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
                    NOTIFY_STATE_ENTERED("ROOT.getPressure");
                    rootState_subState = getPressure;
                    rootState_active = getPressure;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.getPressure");
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
void OMAnimatedPressure_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("pressure", x2String(myReal->pressure));
}

void OMAnimatedPressure_sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Pressure_sensor::getPressure:
        {
            getPressure_serializeStates(aomsState);
        }
        break;
        case Pressure_sensor::accepttimeevent_1:
        {
            accepttimeevent_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPressure_sensor::getPressure_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.getPressure");
}

void OMAnimatedPressure_sensor::accepttimeevent_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(Pressure_sensor, Default, Default, false, OMAnimatedPressure_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.cpp
*********************************************************************/
