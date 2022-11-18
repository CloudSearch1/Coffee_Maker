#include"Coffepch.h"
#include"CM_Element.h"

namespace CoffeeMaker
{
  CM_Element::CM_Element(std::unique_ptr<CoffeeMaker> api)
  {
    this->api = move(api);
  }

  void CM_Element::Select()
  {
    BrewButtonStatus status = api->GetBrewButtonStatus();
    if (status == BrewButtonStatus::PUSHED)
    {
      StartBrewing();
    }
  }
  
  void CM_Element::CheckButton()
  {
    BrewButtonStatus status = api->GetBrewButtonStatus();
    if (status == BrewButtonStatus::PUSHED)
    {
      StartBrewing();
    }
  }
}
