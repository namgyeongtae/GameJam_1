#pragma once

#include "Character.h"

class Worrior : public Character
{
	public:
		Worrior(Properties* props);

		virtual void Draw();
		virtual void Clean();
		virtual void Update(float dt);

	private:
		int m_Row, m_Frame, m_FrameCount;
		int m_animSpeed;
};

