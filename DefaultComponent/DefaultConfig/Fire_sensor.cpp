/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Fire_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fire_sensor.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Fire_sensor_Fire_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Fire_sensor
Fire_sensor::Fire_sensor() {
    NOTIFY_CONSTRUCTOR(Fire_sensor, Fire_sensor(), 0, Default_Fire_sensor_Fire_sensor_SERIALIZE);
    itsControl_system = NULL;
}

Fire_sensor::~Fire_sensor() {
    NOTIFY_DESTRUCTOR(~Fire_sensor, true);
    cleanUpRelations();
}

Control_system* Fire_sensor::getItsControl_system() const {
    return itsControl_system;
}

void Fire_sensor::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsFire_sensor(this);
        }
    _setItsControl_system(p_Control_system);
}

void Fire_sensor::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Fire_sensor* p_Fire_sensor = itsControl_system->getItsFire_sensor();
            if(p_Fire_sensor != NULL)
                {
                    itsControl_system->__setItsFire_sensor(NULL);
                }
            itsControl_system = NULL;
        }
}

void Fire_sensor::__setItsControl_system(Control_system* p_Control_system) {
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

void Fire_sensor::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsFire_sensor(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Fire_sensor::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFire_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Fire_sensor, Default, Default, false, OMAnimatedFire_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Fire_sensor.cpp
*********************************************************************/
