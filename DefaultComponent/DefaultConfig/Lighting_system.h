/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lighting_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.h
*********************************************************************/

#ifndef Lighting_system_H
#define Lighting_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Lighting_system
class Lighting_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLighting_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Lighting_system();
    
    //## auto_generated
    ~Lighting_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLighting_system : virtual public AOMInstance {
    DECLARE_META(Lighting_system, OMAnimatedLighting_system)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.h
*********************************************************************/
