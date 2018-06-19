/*********************************************************************
	Rhapsody	: 8.2 
	Login		: jlta
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC_system
//!	Generated Date	: Tue, 19, Jun 2018  
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.h
*********************************************************************/

#ifndef HVAC_system_H
#define HVAC_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsAirConditioning
class AirConditioning;

//## link itsControl_system
class Control_system;

//## link itsHeating
class Heating;

//## link itsVentilation
class Ventilation;

//## package Default

//## class HVAC_system
class HVAC_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HVAC_system();
    
    //## auto_generated
    ~HVAC_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getAC_state() const;
    
    //## auto_generated
    void setAC_state(bool p_AC_state);
    
    //## auto_generated
    AirConditioning* getItsAirConditioning() const;
    
    //## auto_generated
    void setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    Control_system* getItsControl_system() const;
    
    //## auto_generated
    void setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    Heating* getItsHeating() const;
    
    //## auto_generated
    void setItsHeating(Heating* p_Heating);
    
    //## auto_generated
    Ventilation* getItsVentilation() const;
    
    //## auto_generated
    void setItsVentilation(Ventilation* p_Ventilation);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool AC_state;		//## attribute AC_state
    
    ////    Relations and components    ////
    
    AirConditioning* itsAirConditioning;		//## link itsAirConditioning
    
    Control_system* itsControl_system;		//## link itsControl_system
    
    Heating* itsHeating;		//## link itsHeating
    
    Ventilation* itsVentilation;		//## link itsVentilation
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    void _setItsAirConditioning(AirConditioning* p_AirConditioning);
    
    //## auto_generated
    void _clearItsAirConditioning();
    
    //## auto_generated
    void __setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _setItsControl_system(Control_system* p_Control_system);
    
    //## auto_generated
    void _clearItsControl_system();
    
    //## auto_generated
    void __setItsVentilation(Ventilation* p_Ventilation);
    
    //## auto_generated
    void _setItsVentilation(Ventilation* p_Ventilation);
    
    //## auto_generated
    void _clearItsVentilation();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC_system : virtual public AOMInstance {
    DECLARE_META(HVAC_system, OMAnimatedHVAC_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC_system.h
*********************************************************************/
