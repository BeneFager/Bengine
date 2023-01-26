#include <Bengine.h>

class Sandbox : public Bengine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Bengine::Application *Bengine::CreateApplication()
{
	return new Sandbox();
}