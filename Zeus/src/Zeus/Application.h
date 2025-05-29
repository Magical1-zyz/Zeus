#pragma once

#include "Core.h"

namespace Zeus {

	class ZEUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


