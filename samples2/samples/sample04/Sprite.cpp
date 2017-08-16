#include "Sprite.h"

Sprite::Sprite(float x, float y, GTexture *texture)
{
	this->x = x;
	this->y = y;
	this->texture = texture;
}

void Sprite::Render(VideoDriver *video)
{
	video->DrawSprite(this->x, this->y, this->texture);
}