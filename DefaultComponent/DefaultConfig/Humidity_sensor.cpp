/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_sensor
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Humidity_sensor.h"
//#[ ignore
#define Default_Humidity_sensor_Humidity_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Humidity_sensor
Humidity_sensor::Humidity_sensor(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Humidity_sensor, Humidity_sensor(), 0, Default_Humidity_sensor_Humidity_sensor_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

Humidity_sensor::~Humidity_sensor() {
    NOTIFY_DESTRUCTOR(~Humidity_sensor, true);
    cancelTimeouts();
}

int Humidity_sensor::getHumidity() const {
    return humidity;
}

void Humidity_sensor::setHumidity(int p_humidity) {
    humidity = p_humidity;
    NOTIFY_SET_OPERATION;
}

bool Humidity_sensor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Humidity_sensor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Humidity_sensor::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Humidity_sensor::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Humidity_sensor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.getHumidity");
        rootState_subState = getHumidity;
        rootState_active = getHumidity;
        rootState_timeout = scheduleTimeout(1000, "ROOT.getHumidity");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Humidity_sensor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State getHumidity
        case getHumidity:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.getHumidity");
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
                    NOTIFY_STATE_ENTERED("ROOT.getHumidity");
                    rootState_subState = getHumidity;
                    rootState_active = getHumidity;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.getHumidity");
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
void OMAnimatedHumidity_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("humidity", x2String(myReal->humidity));
}

void OMAnimatedHumidity_sensor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Humidity_sensor::getHumidity:
        {
            getHumidity_serializeStates(aomsState);
        }
        break;
        case Humidity_sensor::accepttimeevent_1:
        {
            accepttimeevent_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedHumidity_sensor::getHumidity_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.getHumidity");
}

void OMAnimatedHumidity_sensor::accepttimeevent_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_1");
}
//#]

IMPLEMENT_REACTIVE_META_P(Humidity_sensor, Default, Default, false, OMAnimatedHumidity_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.cpp
*********************************************************************/
