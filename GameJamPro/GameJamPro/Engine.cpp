#include "Engine.h"
#include <iostream>

using namespace std;

Engine* Engine::s_Instance = nullptr;

bool Engine::Init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0 && IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG) != 0)
	{
		SDL_Log("Failed to Initialize SDL: %s", SDL_GetError());
		return false;
	}

	return m_IsRunning = true;
}

bool Engine::Clean()
{
	return false;
}

void Engine::Quit()
{
}

void Engine::Update(float dt)
{
	SDL_Log("didididi");
}

void Engine::Render()
{
}

void Engine::Events()
{
}
