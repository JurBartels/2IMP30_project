/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.h
*********************************************************************/

#ifndef HVAC_system_H
#define HVAC_system_H

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
//## link itsAirConditioning
class AirConditioning;

//## link itsControl_system
class Control_system;

//## link itsHeating
class Heating;

//## link itsVentilation
class Ventilation;

//## package Default

//## class HVAC_system
class HVAC_system : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HVAC_system(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~HVAC_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getAC_state() const;
    
    //## auto_generated
    void setAC_state(bool p_AC_state);
    
    //## auto_generated
    AirConditioning* getItsAirConditioning() const;
    
    //## auto_generated
    void setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    Heating* getItsHeating() const;
    
    //## auto_generated
    void setItsHeating(Heating* p_Heating);
    
    //## auto_generated
    Ventilation* getItsVentilation() const;
    
    //## auto_generated
    void setItsVentilation(Ventilation* p_Ventilation);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool AC_state;		//## attribute AC_state
    
    ////    Relations and components    ////
    
    AirConditioning* itsAirConditioning;		//## link itsAirConditioning
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    Heating* itsHeating;		//## link itsHeating
    
    Ventilation* itsVentilation;		//## link itsVentilation
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    void _setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    void _clearItsAirConditioning();
    
    //## auto_generated
    void __setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system();
    
    //## auto_generated
    void __setItsVentilation(Ventilation* p_Ventilation);
    
    //## auto_generated
    void _setItsVentilation(Ventilation* p_Ventilation);
    
    //## auto_generated
    void _clearItsVentilation();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // sendaction_8:
    //## statechart_method
    inline bool sendaction_8_IN() const;
    
    // sendaction_7:
    //## statechart_method
    inline bool sendaction_7_IN() const;
    
    // sendaction_6:
    //## statechart_method
    inline bool sendaction_6_IN() const;
    
    // sendaction_5:
    //## statechart_method
    inline bool sendaction_5_IN() const;
    
    // sendaction_4:
    //## statechart_method
    inline bool sendaction_4_IN() const;
    
    // sendaction_3:
    //## statechart_method
    inline bool sendaction_3_IN() const;
    
    // Idle:
    //## statechart_method
    inline bool Idle_IN() const;
    
    // HeatRoom:
    //## statechart_method
    inline bool HeatRoom_IN() const;
    
    // CoolRoom:
    //## statechart_method
    inline bool CoolRoom_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum HVAC_system_Enum {
        OMNonState = 0,
        sendaction_8 = 1,
        sendaction_7 = 2,
        sendaction_6 = 3,
        sendaction_5 = 4,
        sendaction_4 = 5,
        sendaction_3 = 6,
        Idle = 7,
        HeatRoom = 8,
        CoolRoom = 9
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC_system : virtual public AOMInstance {
    DECLARE_REACTIVE_META(HVAC_system, OMAnimatedHVAC_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sendaction_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HeatRoom_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CoolRoom_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool HVAC_system::rootState_IN() const {
    return true;
}

inline bool HVAC_system::sendaction_8_IN() const {
    return rootState_subState == sendaction_8;
}

inline bool HVAC_system::sendaction_7_IN() const {
    return rootState_subState == sendaction_7;
}

inline bool HVAC_system::sendaction_6_IN() const {
    return rootState_subState == sendaction_6;
}

inline bool HVAC_system::sendaction_5_IN() const {
    return rootState_subState == sendaction_5;
}

inline bool HVAC_system::sendaction_4_IN() const {
    return rootState_subState == sendaction_4;
}

inline bool HVAC_system::sendaction_3_IN() const {
    return rootState_subState == sendaction_3;
}

inline bool HVAC_system::Idle_IN() const {
    return rootState_subState == Idle;
}

inline bool HVAC_system::HeatRoom_IN() const {
    return rootState_subState == HeatRoom;
}

inline bool HVAC_system::CoolRoom_IN() const {
    return rootState_subState == CoolRoom;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.h
*********************************************************************/
