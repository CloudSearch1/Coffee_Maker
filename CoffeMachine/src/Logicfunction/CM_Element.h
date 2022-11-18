#pragma once
#include <Status/Status.h>
#include"CoffeeMachine.h"
#include<memory>
namespace CoffeeMaker
{
  class CM_Element : coffeeMachine
  {
  public:
    CM_Element(std::unique_ptr<CoffeeMaker> api);
    void Select() override;

  private:
    void CheckButton();

  private:
    std::unique_ptr<CoffeeMaker> api;

  };

}
