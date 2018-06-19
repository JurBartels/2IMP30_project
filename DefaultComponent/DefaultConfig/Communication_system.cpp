/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Communication_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Communication_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Communication_system.h"
//## link itsAuthorization_security_system
#include "Authorization_security_system.h"
//#[ ignore
#define Default_Communication_system_Communication_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Communication_system
Communication_system::Communication_system() {
    NOTIFY_CONSTRUCTOR(Communication_system, Communication_system(), 0, Default_Communication_system_Communication_system_SERIALIZE);
    itsAuthorization_security_system = NULL;
}

Communication_system::~Communication_system() {
    NOTIFY_DESTRUCTOR(~Communication_system, true);
    cleanUpRelations();
}

Authorization_security_system* Communication_system::getItsAuthorization_security_system() const {
    return itsAuthorization_security_system;
}

void Communication_system::setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system) {
    if(p_Authorization_security_system != NULL)
        {
            p_Authorization_security_system->_setItsCommunication_system(this);
        }
    _setItsAuthorization_security_system(p_Authorization_security_system);
}

void Communication_system::cleanUpRelations() {
    if(itsAuthorization_security_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAuthorization_security_system");
            Communication_system* p_Communication_system = itsAuthorization_security_system->getItsCommunication_system();
            if(p_Communication_system != NULL)
                {
                    itsAuthorization_security_system->__setItsCommunication_system(NULL);
                }
            itsAuthorization_security_system = NULL;
        }
}

void Communication_system::__setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system) {
    itsAuthorization_security_system = p_Authorization_security_system;
    if(p_Authorization_security_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAuthorization_security_system", p_Authorization_security_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAuthorization_security_system");
        }
}

void Communication_system::_setItsAuthorization_security_system(Authorization_security_system* p_Authorization_security_system) {
    if(itsAuthorization_security_system != NULL)
        {
            itsAuthorization_security_system->__setItsCommunication_system(NULL);
        }
    __setItsAuthorization_security_system(p_Authorization_security_system);
}

void Communication_system::_clearItsAuthorization_security_system() {
    NOTIFY_RELATION_CLEARED("itsAuthorization_security_system");
    itsAuthorization_security_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunication_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAuthorization_security_system", false, true);
    if(myReal->itsAuthorization_security_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsAuthorization_security_system);
        }
}
//#]

IMPLEMENT_META_P(Communication_system, Default, Default, false, OMAnimatedCommunication_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Communication_system.cpp
*********************************************************************/
