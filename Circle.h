#pragma once
#include "IShape.h"
class Circle : public IShape {

	void Size() override;

	void Draw() override;
private:
	float radius_ = 20.0f;
	float pi_ = 3.14f;
	float menseki = 0;
};

