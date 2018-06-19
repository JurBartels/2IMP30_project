/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Authorization_security_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Authorization_security_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Authorization_security_system.h"
//## link itsCommunication_system
#include "Communication_system.h"
//#[ ignore
#define Default_Authorization_security_system_Authorization_security_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Authorization_security_system
Authorization_security_system::Authorization_security_system() {
    NOTIFY_CONSTRUCTOR(Authorization_security_system, Authorization_security_system(), 0, Default_Authorization_security_system_Authorization_security_system_SERIALIZE);
    itsCommunication_system = NULL;
}

Authorization_security_system::~Authorization_security_system() {
    NOTIFY_DESTRUCTOR(~Authorization_security_system, true);
    cleanUpRelations();
}

Communication_system* Authorization_security_system::getItsCommunication_system() const {
    return itsCommunication_system;
}

void Authorization_security_system::setItsCommunication_system(Communication_system* p_Communication_system) {
    if(p_Communication_system != NULL)
        {
            p_Communication_system->_setItsAuthorization_security_system(this);
        }
    _setItsCommunication_system(p_Communication_system);
}

void Authorization_security_system::cleanUpRelations() {
    if(itsCommunication_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_system");
            Authorization_security_system* p_Authorization_security_system = itsCommunication_system->getItsAuthorization_security_system();
            if(p_Authorization_security_system != NULL)
                {
                    itsCommunication_system->__setItsAuthorization_security_system(NULL);
                }
            itsCommunication_system = NULL;
        }
}

void Authorization_security_system::__setItsCommunication_system(Communication_system* p_Communication_system) {
    itsCommunication_system = p_Communication_system;
    if(p_Communication_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunication_system", p_Communication_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunication_system");
        }
}

void Authorization_security_system::_setItsCommunication_system(Communication_system* p_Communication_system) {
    if(itsCommunication_system != NULL)
        {
            itsCommunication_system->__setItsAuthorization_security_system(NULL);
        }
    __setItsCommunication_system(p_Communication_system);
}

void Authorization_security_system::_clearItsCommunication_system() {
    NOTIFY_RELATION_CLEARED("itsCommunication_system");
    itsCommunication_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAuthorization_security_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCommunication_system", false, true);
    if(myReal->itsCommunication_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunication_system);
        }
}
//#]

IMPLEMENT_META_P(Authorization_security_system, Default, Default, false, OMAnimatedAuthorization_security_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Authorization_security_system.cpp
*********************************************************************/
