#include "bepch.h"
#include <Bengine.h>

class ExampleLayer : public Bengine::Layer
{
public:
	ExampleLayer() 
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		BE_INFO("ExampleLayer::Update");
	}

	void OnEvent(Bengine::Event& event) override
	{
		BE_TRACE("{0}", event);
	}
};


class Sandbox : public Bengine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverLay(new Bengine::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Bengine::Application *Bengine::CreateApplication()
{
	return new Sandbox();
}