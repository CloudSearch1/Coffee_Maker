#pragma once
#include"Status/Status.h"
namespace CoffeeMaker {

  class CoffeeMaker
  {
  public:
    WarmerPlateStatus GetWarmerPlateStatus() ;
    BoilerStatus GetBoilerStatus();
    BrewButtonStatus GetBrewButtonStatus();
    void SetBoilerHeaterState(BoilerHeaterState s);
    void SetWarmerState(CoffeeStatus::WarmerState s);
    void SetIndicatorState(CoffeeState::IndicatorState s);
    void SetReliefValveState(ReliefValveState s);
  };

}
