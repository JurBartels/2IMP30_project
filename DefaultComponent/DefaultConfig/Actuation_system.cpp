/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Actuation_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Actuation_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Actuation_system.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Actuation_system_Actuation_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Actuation_system
Actuation_system::Actuation_system() {
    NOTIFY_CONSTRUCTOR(Actuation_system, Actuation_system(), 0, Default_Actuation_system_Actuation_system_SERIALIZE);
    itsControl_system = NULL;
}

Actuation_system::~Actuation_system() {
    NOTIFY_DESTRUCTOR(~Actuation_system, true);
    cleanUpRelations();
}

Control_system* Actuation_system::getItsControl_system() const {
    return itsControl_system;
}

void Actuation_system::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsActuation_system(this);
        }
    _setItsControl_system(p_Control_system);
}

void Actuation_system::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Actuation_system* p_Actuation_system = itsControl_system->getItsActuation_system();
            if(p_Actuation_system != NULL)
                {
                    itsControl_system->__setItsActuation_system(NULL);
                }
            itsControl_system = NULL;
        }
}

void Actuation_system::__setItsControl_system(Control_system* p_Control_system) {
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

void Actuation_system::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsActuation_system(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Actuation_system::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedActuation_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Actuation_system, Default, Default, false, OMAnimatedActuation_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Actuation_system.cpp
*********************************************************************/
