#pragma once
#include"Status/Status.h"
#include"ContainmentVessel.h"
#include"HotWater.h"
#include"CoffeeMaker.h"

namespace CoffeeMaker
{
  class coffeeMachine
  {
  private:
    //HotWater hws;
    //ContainmentVessel cv;
  public:
    void Done() { }
    void Complete() { }
  protected:
    void StartBrewing()
    {
      //if (hws.IsReady() && cv.IsReady())
      //{
      //  hws.Start();
      //  cv.Start();
      //}
    }

  };

}

