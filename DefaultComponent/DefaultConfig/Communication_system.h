/*********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Communication_system
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Communication_system.h
*********************************************************************/

#ifndef Communication_system_H
#define Communication_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsAuthorization_security_system
class Authorization_security_system;

//## package Default

//## class Communication_system
class Communication_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCommunication_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Communication_system();
    
    //## auto_generated
    ~Communication_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Authorization_security_system* getItsAuthorization_security_system() const;
    
    //## auto_generated
    void setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Authorization_security_system* itsAuthorization_security_system;		//## link itsAuthorization_security_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system);
    
    //## auto_generated
    void _setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system);
    
    //## auto_generated
    void _clearItsAuthorization_security_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCommunication_system : virtual public AOMInstance {
    DECLARE_META(Communication_system, OMAnimatedCommunication_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Communication_system.h
*********************************************************************/
