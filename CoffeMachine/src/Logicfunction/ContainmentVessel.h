#pragma once
#include"CoffeeMaker.h"

namespace CoffeeMaker
{
  class ContainmentVessel
  {
  public:

    virtual bool IsReady() { return false; };
    virtual void Start() {};

  private:

  };

}
