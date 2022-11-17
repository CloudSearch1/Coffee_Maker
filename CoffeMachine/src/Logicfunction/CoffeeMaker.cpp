#include"Coffepch.h"
#include"CoffeeMaker.h"

namespace CoffeeMaker
{
  WarmerPlateStatus CofferMaker::GetWarmerPlateStatus()
  {
    return WarmerPlateStatus();
  }
  BoilerStatus CofferMaker::GetBoilerStatus()
  {
    return BoilerStatus();
  }
  BrewButtonStatus CofferMaker::GetBrewButtonStatus()
  {

    return BrewButtonStatus();
  }
  void CofferMaker::SetBoilerHeaterState(CoffeeBoilerHeater::BoilerHeaterState s)
  {
  }
  void CofferMaker::SetWarmerState(WarmerState s)
  {
  }
  void CofferMaker::SetIndicatorState(CoffeeIndicator::IndicatorState s)
  {
  }
  void CofferMaker::SetReliefValveState(ReliefValveState s)
  {
  }
}
