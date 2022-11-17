#include "CoffeMachine/src/Logicfunction/CoffeeMaker.h"


class Sandbox : public CoffeeMaker::CofferMaker{
public:
	Sandbox()
	{
		//Gazel::ImGuiLayer();
		//PushOverlay(new Gazel::ImGuiLayer());
	}
	~Sandbox()
	{

	}
};

int main()
{
  Sandbox();
  return 0;
}
