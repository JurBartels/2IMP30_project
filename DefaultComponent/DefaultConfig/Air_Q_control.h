/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Air_Q_control
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Air_Q_control.h
*********************************************************************/

#ifndef Air_Q_control_H
#define Air_Q_control_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsControl_system
class Control_system;

//## package Default

//## class Air_Q_control
class Air_Q_control {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAir_Q_control;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Air_Q_control();
    
    //## auto_generated
    ~Air_Q_control();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAir_Q_control : virtual public AOMInstance {
    DECLARE_META(Air_Q_control, OMAnimatedAir_Q_control)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Air_Q_control.h
*********************************************************************/
