#pragma once
#include"ContainmentVessel.h"
#include"CoffeeMaker.h"
#include<memory>
namespace CoffeeMaker
{
  class CV_Element :public ContainmentVessel
  {
  public:
    virtual ~CV_Element() {}
    CV_Element(std::unique_ptr<CoffeeMaker> api);

    virtual bool IsReady() override;
    virtual void Start() override;

  private:
    std::unique_ptr<CoffeeMaker> api;
    bool isBrewing = false;
  };
}
