#include <Zeus.h>

class Sandbox : public Zeus::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Zeus::Application* Zeus::CreateApplication()
{
	return new Sandbox();
}
