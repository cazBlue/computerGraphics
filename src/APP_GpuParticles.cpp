#include <APP_GpuParticles.h>

APP_GPUParticles::APP_GPUParticles()
{

}
APP_GPUParticles::~APP_GPUParticles()
{

}

void APP_GPUParticles::Update(float a_dt)
{
	GameCam->Update(a_dt); //update camera


}

void APP_GPUParticles::Draw()
{
	Gizmos::clear();
	Gizmos::addTransform(glm::mat4(1));

	vec4 white(1);
	vec4 black(0, 0, 0, 1);

	//	draws the home grid
	for (int i = 0; i < 21; ++i) {
		Gizmos::addLine(vec3(-10 + i, 0, 10),
			vec3(-10 + i, 0, -10),
			i == 10 ? white : black);
		Gizmos::addLine(vec3(10, 0, -10 + i),
			vec3(-10, 0, -10 + i),
			i == 10 ? white : black);
	}

	Gizmos::draw(GameCam->GetProjectionView());
}

bool APP_GPUParticles::Start()
{
	Gizmos::create();

	GameCam = new Camera();

	return true; //not being used in this lesson
}

bool APP_GPUParticles::Shutdown()
{
	delete GameCam;
	Gizmos::destroy();

	return true; //not being used in this lesson
}