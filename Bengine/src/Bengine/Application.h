#pragma once

#include "Core.h"

namespace Bengine
{

	class BENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};

	//To be defined in CLIENT  
	Application *CreateApplication();


}

