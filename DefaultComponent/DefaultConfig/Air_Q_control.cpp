/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Air_Q_control
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Air_Q_control.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Air_Q_control.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Air_Q_control_Air_Q_control_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Air_Q_control
Air_Q_control::Air_Q_control() {
    NOTIFY_CONSTRUCTOR(Air_Q_control, Air_Q_control(), 0, Default_Air_Q_control_Air_Q_control_SERIALIZE);
    itsControl_system = NULL;
}

Air_Q_control::~Air_Q_control() {
    NOTIFY_DESTRUCTOR(~Air_Q_control, true);
    cleanUpRelations();
}

Control_system* Air_Q_control::getItsControl_system() const {
    return itsControl_system;
}

void Air_Q_control::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsAir_Q_control(this);
        }
    _setItsControl_system(p_Control_system);
}

void Air_Q_control::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Air_Q_control* p_Air_Q_control = itsControl_system->getItsAir_Q_control();
            if(p_Air_Q_control != NULL)
                {
                    itsControl_system->__setItsAir_Q_control(NULL);
                }
            itsControl_system = NULL;
        }
}

void Air_Q_control::__setItsControl_system(Control_system* p_Control_system) {
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

void Air_Q_control::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsAir_Q_control(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Air_Q_control::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAir_Q_control::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Air_Q_control, Default, Default, false, OMAnimatedAir_Q_control)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Air_Q_control.cpp
*********************************************************************/
