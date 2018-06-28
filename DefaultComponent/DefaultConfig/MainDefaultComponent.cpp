/********************************************************************
	Rhapsody	: 8.2 
	Login		: s137910
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 28, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Default.h"
DefaultComponent::DefaultComponent() {
    Default_initRelations();
    Default_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            DefaultComponent initializer_DefaultComponent;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
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
