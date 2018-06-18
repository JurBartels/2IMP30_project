/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Pressure_sensor
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.h
*********************************************************************/

#ifndef Pressure_sensor_H
#define Pressure_sensor_H

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

//## class Pressure_sensor
class Pressure_sensor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPressure_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Pressure_sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Pressure_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getPressure() const;
    
    //## auto_generated
    void setPressure(int p_pressure);
    
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
    
    int pressure;		//## attribute pressure
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // getPressure:
    //## statechart_method
    inline bool getPressure_IN() const;
    
    // accepttimeevent_1:
    //## statechart_method
    inline bool accepttimeevent_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Pressure_sensor_Enum {
        OMNonState = 0,
        getPressure = 1,
        accepttimeevent_1 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPressure_sensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Pressure_sensor, OMAnimatedPressure_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void getPressure_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Pressure_sensor::rootState_IN() const {
    return true;
}

inline bool Pressure_sensor::getPressure_IN() const {
    return rootState_subState == getPressure;
}

inline bool Pressure_sensor::accepttimeevent_1_IN() const {
    return rootState_subState == accepttimeevent_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Pressure_sensor.h
*********************************************************************/
