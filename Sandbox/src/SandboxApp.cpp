#include <GamEn.h>

class Sandbox : public GamEn::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox() 
	{

	}
};

GamEn::Application* GamEn::CreateApplication()
{
	return new Sandbox();
}