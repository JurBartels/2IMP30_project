/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Temperature_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.h
*********************************************************************/

#ifndef Temperature_sensor_H
#define Temperature_sensor_H

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
//## link itsControl_system
class Control_system;

//## package Default

//## class Temperature_sensor
class Temperature_sensor : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTemperature_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Temperature_sensor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Temperature_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getTemp() const;
    
    //## auto_generated
    void setTemp(int p_temp);
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int temp;		//## attribute temp
    
    ////    Relations and components    ////
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // getTemperature:
    //## statechart_method
    inline bool getTemperature_IN() const;
    
    // accepttimeevent_1:
    //## statechart_method
    inline bool accepttimeevent_1_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Temperature_sensor_Enum {
        OMNonState = 0,
        getTemperature = 1,
        accepttimeevent_1 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTemperature_sensor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Temperature_sensor, OMAnimatedTemperature_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void getTemperature_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_1_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Temperature_sensor::rootState_IN() const {
    return true;
}

inline bool Temperature_sensor::getTemperature_IN() const {
    return rootState_subState == getTemperature;
}

inline bool Temperature_sensor::accepttimeevent_1_IN() const {
    return rootState_subState == accepttimeevent_1;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Temperature_sensor.h
*********************************************************************/
