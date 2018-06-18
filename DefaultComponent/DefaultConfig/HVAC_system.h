/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_system
//!	Generated Date	: Mon, 18, Jun 2018  
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
//## link itsControl_system
class Control_system;

//## package Default

//## class HVAC_system
class HVAC_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HVAC_system();
    
    //## auto_generated
    ~HVAC_system();
    
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
class OMAnimatedHVAC_system : virtual public AOMInstance {
    DECLARE_META(HVAC_system, OMAnimatedHVAC_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.h
*********************************************************************/
