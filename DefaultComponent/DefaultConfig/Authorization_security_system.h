/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authorization_security_system
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Authorization_security_system.h
*********************************************************************/

#ifndef Authorization_security_system_H
#define Authorization_security_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsCommunication_system
class Communication_system;

//## package Default

//## class Authorization_security_system
class Authorization_security_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAuthorization_security_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Authorization_security_system();
    
    //## auto_generated
    ~Authorization_security_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Communication_system* getItsCommunication_system() const;
    
    //## auto_generated
    void setItsCommunication_system(Communication_system* p_Communication_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Communication_system* itsCommunication_system;		//## link itsCommunication_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCommunication_system(Communication_system* p_Communication_system);
    
    //## auto_generated
    void _setItsCommunication_system(Communication_system* p_Communication_system);
    
    //## auto_generated
    void _clearItsCommunication_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAuthorization_security_system : virtual public AOMInstance {
    DECLARE_META(Authorization_security_system, OMAnimatedAuthorization_security_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authorization_security_system.h
*********************************************************************/
