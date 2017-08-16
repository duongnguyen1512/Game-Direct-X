#pragma once

#include "VideoDriver.h"

class GameObject
{
public:
	float x, y;

	virtual void Render(VideoDriver *) = 0;
	//virtual void Update() = 0;
};