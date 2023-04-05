#include "Engine.h"
#include <iostream>

using namespace std;

Engine* Engine::s_Instance = nullptr;

bool Engine::Init()
{
	return false;
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
	cout << "updating..." << endl;
}

void Engine::Render()
{
}

void Engine::Events()
{
}
