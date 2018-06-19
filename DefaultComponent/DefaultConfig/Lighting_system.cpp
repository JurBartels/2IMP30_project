/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lighting_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lighting_system.h"
//#[ ignore
#define Default_Lighting_system_Lighting_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Lighting_system
Lighting_system::Lighting_system() {
    NOTIFY_CONSTRUCTOR(Lighting_system, Lighting_system(), 0, Default_Lighting_system_Lighting_system_SERIALIZE);
}

Lighting_system::~Lighting_system() {
    NOTIFY_DESTRUCTOR(~Lighting_system, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Lighting_system, Default, Default, false, OMAnimatedLighting_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.cpp
*********************************************************************/
