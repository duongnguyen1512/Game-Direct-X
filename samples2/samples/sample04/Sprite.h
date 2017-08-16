#pragma once
#include "GameObject.h"

class Sprite : public GameObject
{
public:
	GTexture *texture;
	Sprite(float x, float y, GTexture *texture);
	void Render(VideoDriver *);
};