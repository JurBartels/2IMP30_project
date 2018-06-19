/********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Default.h"
//## auto_generated
#include "Control_system.h"
//## auto_generated
#include "Heating.h"
//## auto_generated
#include "HVAC_system.h"
//## auto_generated
#include "Temperature_sensor.h"
DefaultComponent::DefaultComponent() {
    Default_initRelations();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Control_system * p_Control_system;
            Heating * p_Heating;
            HVAC_system * p_HVAC_system;
            Temperature_sensor * p_Temperature_sensor;
            DefaultComponent initializer_DefaultComponent;
            p_Control_system = new Control_system;
            p_Heating = new Heating;
            p_Heating->startBehavior();
            p_HVAC_system = new HVAC_system;
            p_Temperature_sensor = new Temperature_sensor;
            p_Temperature_sensor->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Control_system;
            delete p_Heating;
            delete p_HVAC_system;
            delete p_Temperature_sensor;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
