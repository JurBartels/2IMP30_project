/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Light_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Light_sensor.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Light_sensor_Light_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Light_sensor
Light_sensor::Light_sensor() {
    NOTIFY_CONSTRUCTOR(Light_sensor, Light_sensor(), 0, Default_Light_sensor_Light_sensor_SERIALIZE);
    itsControl_system = NULL;
}

Light_sensor::~Light_sensor() {
    NOTIFY_DESTRUCTOR(~Light_sensor, true);
    cleanUpRelations();
}

Control_system* Light_sensor::getItsControl_system() const {
    return itsControl_system;
}

void Light_sensor::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsLight_sensor(this);
        }
    _setItsControl_system(p_Control_system);
}

void Light_sensor::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Light_sensor* p_Light_sensor = itsControl_system->getItsLight_sensor();
            if(p_Light_sensor != NULL)
                {
                    itsControl_system->__setItsLight_sensor(NULL);
                }
            itsControl_system = NULL;
        }
}

void Light_sensor::__setItsControl_system(Control_system* p_Control_system) {
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

void Light_sensor::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsLight_sensor(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Light_sensor::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLight_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Light_sensor, Default, Default, false, OMAnimatedLight_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Light_sensor.cpp
*********************************************************************/
