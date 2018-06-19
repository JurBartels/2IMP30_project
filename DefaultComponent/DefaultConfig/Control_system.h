/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Control_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\Control_system.h
*********************************************************************/

#ifndef Control_system_H
#define Control_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class Control_system
#include "sensing_system.h"
//## link itsActuation_system
class Actuation_system;

//## link itsAir_Q_control
class Air_Q_control;

//## link itsAir_Q_sensor
class Air_Q_sensor;

//## link itsFire_sensor
class Fire_sensor;

//## link itsHVAC_system
class HVAC_system;

//## link itsLight_sensor
class Light_sensor;

//## link itsLighting_system
class Lighting_system;

//## link itsTemperature_sensor
class Temperature_sensor;

//## package Default

//## class Control_system
// The control system gets input from the sensing system and sends appropriate actuation to actuation system
class Control_system : public sensing_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedControl_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Control_system();
    
    //## auto_generated
    ~Control_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Actuation_system* getItsActuation_system() const;
    
    //## auto_generated
    void setItsActuation_system(Actuation_system* p_Actuation_system);
    
    //## auto_generated
    Air_Q_control* getItsAir_Q_control() const;
    
    //## auto_generated
    void setItsAir_Q_control(Air_Q_control* p_Air_Q_control);
    
    //## auto_generated
    Air_Q_sensor* getItsAir_Q_sensor() const;
    
    //## auto_generated
    void setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor);
    
    //## auto_generated
    Fire_sensor* getItsFire_sensor() const;
    
    //## auto_generated
    void setItsFire_sensor(Fire_sensor* p_Fire_sensor);
    
    //## auto_generated
    HVAC_system* getItsHVAC_system() const;
    
    //## auto_generated
    void setItsHVAC_system(HVAC_system* p_HVAC_system);
    
    //## auto_generated
    Light_sensor* getItsLight_sensor() const;
    
    //## auto_generated
    void setItsLight_sensor(Light_sensor* p_Light_sensor);
    
    //## auto_generated
    Lighting_system* getItsLighting_system() const;
    
    //## auto_generated
    void setItsLighting_system(Lighting_system* p_Lighting_system);
    
    //## auto_generated
    sensing_system* getItsSensing_system() const;
    
    //## auto_generated
    void setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    sensing_system* getItsSensing_system_2() const;
    
    //## auto_generated
    void setItsSensing_system_2(sensing_system* p_sensing_system);
    
    //## auto_generated
    Temperature_sensor* getItsTemperature_sensor() const;
    
    //## auto_generated
    void setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Actuation_system* itsActuation_system;		//## link itsActuation_system
    
    Air_Q_control* itsAir_Q_control;		//## link itsAir_Q_control
    
    Air_Q_sensor* itsAir_Q_sensor;		//## link itsAir_Q_sensor
    
    Fire_sensor* itsFire_sensor;		//## link itsFire_sensor
    
    HVAC_system* itsHVAC_system;		//## link itsHVAC_system
    
    Light_sensor* itsLight_sensor;		//## link itsLight_sensor
    
    Lighting_system* itsLighting_system;		//## link itsLighting_system
    
    sensing_system* itsSensing_system;		//## link itsSensing_system
    
    sensing_system* itsSensing_system_2;		//## link itsSensing_system_2
    
    Temperature_sensor* itsTemperature_sensor;		//## link itsTemperature_sensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsActuation_system(Actuation_system* p_Actuation_system);
    
    //## auto_generated
    void _setItsActuation_system(Actuation_system* p_Actuation_system);
    
    //## auto_generated
    void _clearItsActuation_system();
    
    //## auto_generated
    void __setItsAir_Q_control(Air_Q_control* p_Air_Q_control);
    
    //## auto_generated
    void _setItsAir_Q_control(Air_Q_control* p_Air_Q_control);
    
    //## auto_generated
    void _clearItsAir_Q_control();
    
    //## auto_generated
    void __setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor);
    
    //## auto_generated
    void _setItsAir_Q_sensor(Air_Q_sensor* p_Air_Q_sensor);
    
    //## auto_generated
    void _clearItsAir_Q_sensor();
    
    //## auto_generated
    void __setItsFire_sensor(Fire_sensor* p_Fire_sensor);
    
    //## auto_generated
    void _setItsFire_sensor(Fire_sensor* p_Fire_sensor);
    
    //## auto_generated
    void _clearItsFire_sensor();
    
    //## auto_generated
    void __setItsHVAC_system(HVAC_system* p_HVAC_system);
    
    //## auto_generated
    void _setItsHVAC_system(HVAC_system* p_HVAC_system);
    
    //## auto_generated
    void _clearItsHVAC_system();
    
    //## auto_generated
    void __setItsLight_sensor(Light_sensor* p_Light_sensor);
    
    //## auto_generated
    void _setItsLight_sensor(Light_sensor* p_Light_sensor);
    
    //## auto_generated
    void _clearItsLight_sensor();
    
    //## auto_generated
    void __setItsLighting_system(Lighting_system* p_Lighting_system);
    
    //## auto_generated
    void _setItsLighting_system(Lighting_system* p_Lighting_system);
    
    //## auto_generated
    void _clearItsLighting_system();
    
    //## auto_generated
    void __setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _setItsSensing_system(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _clearItsSensing_system();
    
    //## auto_generated
    void __setItsSensing_system_2(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _setItsSensing_system_2(sensing_system* p_sensing_system);
    
    //## auto_generated
    void _clearItsSensing_system_2();
    
    //## auto_generated
    void __setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor);
    
    //## auto_generated
    void _setItsTemperature_sensor(Temperature_sensor* p_Temperature_sensor);
    
    //## auto_generated
    void _clearItsTemperature_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedControl_system : public OMAnimatedsensing_system {
    DECLARE_META(Control_system, OMAnimatedControl_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Control_system.h
*********************************************************************/
