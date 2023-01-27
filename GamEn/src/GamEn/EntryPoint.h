#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GamEn::Application* GamEn::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = GamEn::CreateApplication();
	app->Run();
	delete app;
}

#endif
