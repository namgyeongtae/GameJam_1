#include "Worrior.h"
#include "TextureManager.h"
#include "SDL.h"

Worrior::Worrior(Properties* props) : Character(props) {
	m_RigidBody = new RigidBody();

	m_Animation = new Animation();
	m_Animation->SetProps(m_TextureID, 1, 6, 80, SDL_FLIP_HORIZONTAL);
}

void Worrior::Draw()
{
	m_Animation->Draw(m_Transform->X, m_Transform->Y, m_Width, m_Height);
}

void Worrior::Clean()
{
	TextureManager::GetInstance()->Clean();
}

void Worrior::Update(float dt)
{
	m_RigidBody->Update(0.4);
	m_RigidBody->ApplyForceX(5);

	m_Transform->TranslateX(m_RigidBody->Position().X);
	m_Transform->TranslateY(m_RigidBody->Position().Y);

	m_Animation->Update();
}
