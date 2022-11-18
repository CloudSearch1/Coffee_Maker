#pragma once
#include"CoffeeMaker.h"
namespace CoffeeMaker
{
  class HotWater
  {
  private:


  public:
    virtual bool IsReady() const { return false; };
    virtual void Start() const {};
  };
}
