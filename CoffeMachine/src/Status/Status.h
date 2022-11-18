#pragma once
namespace CoffeeStatus
{
  enum WarmerState {
    OFF, ON
  };
}
namespace CoffeeState
{
  enum IndicatorState {
    OFF, ON
  };
}
namespace CoffeeMaker {
  enum WarmerPlateStatus {
    WARMER_EMPTY, POT_EMPTY, POT_NOT_EMPTY
  };
  enum BoilerStatus {
    EMPTY, NOT_EMPTY
  };
  enum BrewButtonStatus {
    NOT_PUSHED, PUSHED
  };
  enum BoilerHeaterState {
    OFF, ON
  };

  enum ReliefValveState {
    CLOSED, OPEN
  };
}

