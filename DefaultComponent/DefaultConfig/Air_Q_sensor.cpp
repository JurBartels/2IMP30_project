/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Air_Q_sensor
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Air_Q_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Air_Q_sensor.h"
//## link itsControl_system
#include "Control_system.h"
//#[ ignore
#define Default_Air_Q_sensor_Air_Q_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Air_Q_sensor
Air_Q_sensor::Air_Q_sensor() {
    NOTIFY_CONSTRUCTOR(Air_Q_sensor, Air_Q_sensor(), 0, Default_Air_Q_sensor_Air_Q_sensor_SERIALIZE);
    itsControl_system = NULL;
}

Air_Q_sensor::~Air_Q_sensor() {
    NOTIFY_DESTRUCTOR(~Air_Q_sensor, true);
    cleanUpRelations();
}

Control_system* Air_Q_sensor::getItsControl_system() const {
    return itsControl_system;
}

void Air_Q_sensor::setItsControl_system(Control_system* p_Control_system) {
    if(p_Control_system != NULL)
        {
            p_Control_system->_setItsAir_Q_sensor(this);
        }
    _setItsControl_system(p_Control_system);
}

void Air_Q_sensor::cleanUpRelations() {
    if(itsControl_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsControl_system");
            Air_Q_sensor* p_Air_Q_sensor = itsControl_system->getItsAir_Q_sensor();
            if(p_Air_Q_sensor != NULL)
                {
                    itsControl_system->__setItsAir_Q_sensor(NULL);
                }
            itsControl_system = NULL;
        }
}

void Air_Q_sensor::__setItsControl_system(Control_system* p_Control_system) {
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

void Air_Q_sensor::_setItsControl_system(Control_system* p_Control_system) {
    if(itsControl_system != NULL)
        {
            itsControl_system->__setItsAir_Q_sensor(NULL);
        }
    __setItsControl_system(p_Control_system);
}

void Air_Q_sensor::_clearItsControl_system() {
    NOTIFY_RELATION_CLEARED("itsControl_system");
    itsControl_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAir_Q_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsControl_system", false, true);
    if(myReal->itsControl_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsControl_system);
        }
}
//#]

IMPLEMENT_META_P(Air_Q_sensor, Default, Default, false, OMAnimatedAir_Q_sensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Air_Q_sensor.cpp
*********************************************************************/
