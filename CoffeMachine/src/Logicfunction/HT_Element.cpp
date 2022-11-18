#include"Coffepch.h"
#include "HT_Element.h"

namespace CoffeeMaker
{
  HT_Element::HT_Element(std::unique_ptr<CoffeeMaker> api)
  {
    this->api = move(api);
  }

  bool HT_Element::IsReady() const
  {
    BoilerStatus status = api->GetBoilerStatus();
    return status == BoilerStatus::NOT_EMPTY;
  }

  void HT_Element::Start() const
  {
    api->SetReliefValveState(ReliefValveState::CLOSED);
    api->SetBoilerHeaterState(BoilerHeaterState::ON);
  }



}
