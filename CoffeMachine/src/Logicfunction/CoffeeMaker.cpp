#include "Coffepch.h"
#include "CoffeeMaker.h"

namespace CoffeeMaker
{

  WarmerPlateStatus CoffeeMaker::GetWarmerPlateStatus()
  {
    return WarmerPlateStatus();
  }

  BoilerStatus CoffeeMaker::GetBoilerStatus()
  {
    return BoilerStatus();
  }

  BrewButtonStatus CoffeeMaker::GetBrewButtonStatus()
  {
    return BrewButtonStatus();
  }

  void CoffeeMaker::SetBoilerHeaterState(BoilerHeaterState s)
  {
  }

  void CoffeeMaker::SetWarmerState(CoffeeStatus::WarmerState s)
  {
  }

  void CoffeeMaker::SetIndicatorState(CoffeeState::IndicatorState s)
  {
  }

  void CoffeeMaker::SetReliefValveState(ReliefValveState s)
  {
  }

}
