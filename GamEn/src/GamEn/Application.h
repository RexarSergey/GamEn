#pragma once

#include "Core.h"

namespace GamEn {

	class GAMEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

