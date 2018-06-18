/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Humidity_sensor
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.h
*********************************************************************/

#ifndef Humidity_sensor_H
#define Humidity_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package Default

//## class Humidity_sensor
class Humidity_sensor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHumidity_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Humidity_sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Humidity_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getHumidity() const;
    
    //## auto_generated
    void setHumidity(int p_humidity);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int humidity;		//## attribute humidity
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // getHumidity:
    //## statechart_method
    inline bool getHumidity_IN() const;
    
    // accepttimeevent_1:
    //## statechart_method
    inline bool accepttimeevent_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Humidity_sensor_Enum {
        OMNonState = 0,
        getHumidity = 1,
        accepttimeevent_1 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHumidity_sensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Humidity_sensor, OMAnimatedHumidity_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void getHumidity_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Humidity_sensor::rootState_IN() const {
    return true;
}

inline bool Humidity_sensor::getHumidity_IN() const {
    return rootState_subState == getHumidity;
}

inline bool Humidity_sensor::accepttimeevent_1_IN() const {
    return rootState_subState == accepttimeevent_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Humidity_sensor.h
*********************************************************************/
