#pragma once
#include"Status/Status.h"
#include"ContainmentVessel.h"
#include"HotWater.h"

namespace CoffeeMaker
{
  class coffeeMachine
  {
  public:
    virtual ~coffeeMachine();

    virtual void Done() { }
    virtual void Complete() { }
    virtual void Select() {}
  protected:
    void StartBrewing();
  private:
    std::unique_ptr< HotWater> m_HotWater;
    std::unique_ptr< ContainmentVessel> m_ContainmentVessel;
  };

}

