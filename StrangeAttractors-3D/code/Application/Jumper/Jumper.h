#pragma once
#include <iostream>
#include <vector>
#include <ctime>

#include <irrlicht.h>

#include "../Attractor/Attractor.h"

class Jumper
{
	public:

		Jumper(irr::scene::ISceneManager *SceneManager, std::vector<Attractor*> Attractors);

		void Jump();
		void Reset();

	private:

		irr::scene::ISceneNode *_JumpPoint;
		irr::scene::ISceneManager *_SceneManager;

		std::vector<irr::scene::ISceneNode*> _JumpedPositions;
		std::vector<Attractor*> _Attractors;

};