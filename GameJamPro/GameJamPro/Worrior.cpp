#include "Worrior.h"
#include "TextureManager.h"
#include "SDL.h"

Worrior::Worrior(Properties* props) : Character(props) {
	m_Row = 1;
	m_FrameCount = 6;
	m_animSpeed = 80;
}

void Worrior::Draw()
{
	TextureManager::GetInstance()->DrawFrame(m_TextureID, m_Transform->X, m_Transform->Y, m_Width, m_Height, m_Row, m_Frame);
}

void Worrior::Clean()
{
	TextureManager::GetInstance()->Clean();
}

void Worrior::Update(float dt)
{
	m_Frame = (SDL_GetTicks() / m_animSpeed) % m_FrameCount;
}
