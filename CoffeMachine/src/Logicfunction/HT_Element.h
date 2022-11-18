
#include"HotWater.h"

namespace CoffeeMaker
{
  class HT_Element :public HotWater
  {
  public:
    
    HT_Element(std::unique_ptr<CoffeeMaker> api);
    bool IsReady() const override;
    void Start() const override;
   
  private:
    std::unique_ptr<CoffeeMaker> api;
  };
}
