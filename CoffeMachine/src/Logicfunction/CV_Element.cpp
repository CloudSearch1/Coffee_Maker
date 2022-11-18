#include"Coffepch.h"
#include "CV_Element.h"

namespace CoffeeMaker
{

  CV_Element::CV_Element(std::unique_ptr<CoffeeMaker> api)
  {
    this->api = move(api);
  }
  bool CV_Element::IsReady() 
  {
    WarmerPlateStatus status = api->GetWarmerPlateStatus();
    return status == WarmerPlateStatus::POT_EMPTY;
  }

  void CV_Element::Start()
  {
    isBrewing = true;
  }

}
