#include"Coffepch.h"
#include"CoffeeMachine.h"

namespace CoffeeMaker
{
  coffeeMachine::~coffeeMachine()
  {
    m_HotWater.reset();
    m_ContainmentVessel.reset();
  };

  void coffeeMachine::StartBrewing()
  {
    if (m_HotWater->IsReady() && m_ContainmentVessel->IsReady())
    {
      m_HotWater->Start();
      m_ContainmentVessel->Start();
    }
  }
}
