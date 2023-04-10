#pragma once

#include "Character.h"
#include "Animation.h"
#include "RigidBody.h"

class Worrior : public Character
{
	public:
		Worrior(Properties* props);

		virtual void Draw();
		virtual void Clean();
		virtual void Update(float dt);

	private:
		Animation* m_Animation;
		RigidBody* m_RigidBody;
};

