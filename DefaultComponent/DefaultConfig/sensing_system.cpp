/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sensing_system
//!	Generated Date	: Mon, 18, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\sensing_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sensing_system.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_sensing_system_sensing_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class sensing_system
sensing_system::sensing_system() {
    NOTIFY_CONSTRUCTOR(sensing_system, sensing_system(), 0, Default_sensing_system_sensing_system_SERIALIZE);
    itsControl_system = NULL;
    itsControl_system_1 = NULL;
    itsSensing_system = NULL;
    itsSensing_system_1 = NULL;
}

sensing_system::~sensing_system() {
    NOTIFY_DESTRUCTOR(~sensing_system, true);
    cleanUpRelations();
}

Control_system* sensing_system::getItsControl_system() const {
    return itsControl_system;
}

void sensing_system::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsSensing_system(this);
        }
    _setItsControl_system(p_Control_system);
}

Control_system* sensing_system::getItsControl_system_1() const {
    return itsControl_system_1;
}

void sensing_system::setItsControl_system_1(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsSensing_system_2(this);
        }
    _setItsControl_system_1(p_Control_system);
}

sensing_system* sensing_system::getItsSensing_system() const {
    return itsSensing_system;
}

void sensing_system::setItsSensing_system(sensing_system* p_sensing_system) {
    if(p_sensing_system != NULL)
        {
            p_sensing_system->_setItsSensing_system_1(this);
        }
    _setItsSensing_system(p_sensing_system);
}

sensing_system* sensing_system::getItsSensing_system_1() const {
    return itsSensing_system_1;
}

void sensing_system::setItsSensing_system_1(sensing_system* p_sensing_system) {
    if(p_sensing_system != NULL)
        {
            p_sensing_system->_setItsSensing_system(this);
        }
    _setItsSensing_system_1(p_sensing_system);
}

void sensing_system::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            sensing_system* p_sensing_system = itsControl_system->getItsSensing_system();
            if(p_sensing_system != NULL)
                {
                    itsControl_system->__setItsSensing_system(NULL);
                }
            itsControl_system = NULL;
        }
    if(itsControl_system_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system_1");
            sensing_system* p_sensing_system = itsControl_system_1->getItsSensing_system_2();
            if(p_sensing_system != NULL)
                {
                    itsControl_system_1->__setItsSensing_system_2(NULL);
                }
            itsControl_system_1 = NULL;
        }
    if(itsSensing_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system");
            sensing_system* p_sensing_system = itsSensing_system->getItsSensing_system_1();
            if(p_sensing_system != NULL)
                {
                    itsSensing_system->__setItsSensing_system_1(NULL);
                }
            itsSensing_system = NULL;
        }
    if(itsSensing_system_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system_1");
            sensing_system* p_sensing_system = itsSensing_system_1->getItsSensing_system();
            if(p_sensing_system != NULL)
                {
                    itsSensing_system_1->__setItsSensing_system(NULL);
                }
            itsSensing_system_1 = NULL;
        }
}

void sensing_system::__setItsControl_system(Control_system* p_Control_system) {
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

void sensing_system::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsSensing_system(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void sensing_system::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

void sensing_system::__setItsControl_system_1(Control_system* p_Control_system) {
    itsControl_system_1 = p_Control_system;
    if(p_Control_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsControl_system_1", p_Control_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsControl_system_1");
        }
}

void sensing_system::_setItsControl_system_1(Control_system* p_Control_system) {
    if(itsControl_system_1 != NULL)
        {
            itsControl_system_1->__setItsSensing_system_2(NULL);
        }
    __setItsControl_system_1(p_Control_system);
}

void sensing_system::_clearItsControl_system_1() {
    NOTIFY_RELATION_CLEARED("itsControl_system_1");
    itsControl_system_1 = NULL;
}

void sensing_system::__setItsSensing_system(sensing_system* p_sensing_system) {
    itsSensing_system = p_sensing_system;
    if(p_sensing_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensing_system", p_sensing_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system");
        }
}

void sensing_system::_setItsSensing_system(sensing_system* p_sensing_system) {
    if(itsSensing_system != NULL)
        {
            itsSensing_system->__setItsSensing_system_1(NULL);
        }
    __setItsSensing_system(p_sensing_system);
}

void sensing_system::_clearItsSensing_system() {
    NOTIFY_RELATION_CLEARED("itsSensing_system");
    itsSensing_system = NULL;
}

void sensing_system::__setItsSensing_system_1(sensing_system* p_sensing_system) {
    itsSensing_system_1 = p_sensing_system;
    if(p_sensing_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensing_system_1", p_sensing_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensing_system_1");
        }
}

void sensing_system::_setItsSensing_system_1(sensing_system* p_sensing_system) {
    if(itsSensing_system_1 != NULL)
        {
            itsSensing_system_1->__setItsSensing_system(NULL);
        }
    __setItsSensing_system_1(p_sensing_system);
}

void sensing_system::_clearItsSensing_system_1() {
    NOTIFY_RELATION_CLEARED("itsSensing_system_1");
    itsSensing_system_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsensing_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensing_system", false, true);
    if(myReal->itsSensing_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensing_system);
        }
    aomsRelations->addRelation("itsSensing_system_1", false, true);
    if(myReal->itsSensing_system_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensing_system_1);
        }
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
    aomsRelations->addRelation("itsControl_system_1", false, true);
    if(myReal->itsControl_system_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system_1);
        }
}
//#]

IMPLEMENT_META_P(sensing_system, Default, Default, false, OMAnimatedsensing_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sensing_system.cpp
*********************************************************************/
