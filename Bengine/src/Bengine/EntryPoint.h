#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern Bengine::Application* Bengine::CreateApplication();

int main(int argc, char** argv)
{

	Bengine::Log::Init();

	auto app = Bengine::CreateApplication();
	app->Run();
	delete app;
}

#endif
