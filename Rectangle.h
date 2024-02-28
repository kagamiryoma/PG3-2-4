#pragma once
#include "IShape.h"
class Rectangle : public IShape {

	void Size() override;

	void Draw() override;
private:
	float radius = 20.0f;
	float menseki = 0;
};


