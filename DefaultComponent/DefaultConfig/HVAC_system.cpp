/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_system
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC_system.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_HVAC_system_HVAC_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class HVAC_system
HVAC_system::HVAC_system() {
    NOTIFY_CONSTRUCTOR(HVAC_system, HVAC_system(), 0, Default_HVAC_system_HVAC_system_SERIALIZE);
    itsControl_system = NULL;
}

HVAC_system::~HVAC_system() {
    NOTIFY_DESTRUCTOR(~HVAC_system, true);
    cleanUpRelations();
}

Control_system* HVAC_system::getItsControl_system() const {
    return itsControl_system;
}

void HVAC_system::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsHVAC_system(this);
        }
    _setItsControl_system(p_Control_system);
}

void HVAC_system::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            HVAC_system* p_HVAC_system = itsControl_system->getItsHVAC_system();
            if(p_HVAC_system != NULL)
                {
                    itsControl_system->__setItsHVAC_system(NULL);
                }
            itsControl_system = NULL;
        }
}

void HVAC_system::__setItsControl_system(Control_system* p_Control_system) {
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

void HVAC_system::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsHVAC_system(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void HVAC_system::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(HVAC_system, Default, Default, false, OMAnimatedHVAC_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.cpp
*********************************************************************/
