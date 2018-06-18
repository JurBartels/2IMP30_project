/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Lighting_system
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Lighting_system.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Lighting_system_Lighting_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Lighting_system
Lighting_system::Lighting_system() {
    NOTIFY_CONSTRUCTOR(Lighting_system, Lighting_system(), 0, Default_Lighting_system_Lighting_system_SERIALIZE);
    itsControl_system = NULL;
}

Lighting_system::~Lighting_system() {
    NOTIFY_DESTRUCTOR(~Lighting_system, true);
    cleanUpRelations();
}

Control_system* Lighting_system::getItsControl_system() const {
    return itsControl_system;
}

void Lighting_system::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsLighting_system(this);
        }
    _setItsControl_system(p_Control_system);
}

void Lighting_system::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Lighting_system* p_Lighting_system = itsControl_system->getItsLighting_system();
            if(p_Lighting_system != NULL)
                {
                    itsControl_system->__setItsLighting_system(NULL);
                }
            itsControl_system = NULL;
        }
}

void Lighting_system::__setItsControl_system(Control_system* p_Control_system) {
    itsControl_system = p_Control_system;
    if(p_Control_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsControl_system", p_Control_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
        }
}

void Lighting_system::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsLighting_system(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Lighting_system::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLighting_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Lighting_system, Default, Default, false, OMAnimatedLighting_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Lighting_system.cpp
*********************************************************************/
