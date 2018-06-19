/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sensing_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\sensing_system.h
*********************************************************************/

#ifndef sensing_system_H
#define sensing_system_H

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

//## class sensing_system
class sensing_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsensing_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    sensing_system();
    
    //## auto_generated
    ~sensing_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    Control_system* getItsControl_system_1() const;
    
    //## auto_generated
    void setItsControl_system_1(Control_system* p_Control_system);
    
    //## auto_generated
    sensing_system* getItsSensing_system() const;
    
    //## auto_generated
    void setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    sensing_system* getItsSensing_system_1() const;
    
    //## auto_generated
    void setItsSensing_system_1(sensing_system* p_sensing_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    Control_system* itsControl_system_1;		//## link itsControl_system_1
    
    sensing_system* itsSensing_system;		//## link itsSensing_system
    
    sensing_system* itsSensing_system_1;		//## link itsSensing_system_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system();
    
    //## auto_generated
    void __setItsControl_system_1(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system_1(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system_1();
    
    //## auto_generated
    void __setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _clearItsSensing_system();
    
    //## auto_generated
    void __setItsSensing_system_1(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _setItsSensing_system_1(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _clearItsSensing_system_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsensing_system : virtual public AOMInstance {
    DECLARE_META(sensing_system, OMAnimatedsensing_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sensing_system.h
*********************************************************************/
