#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	menseki= radius_* radius_ * 3.14;
}

void Circle::Draw()
{
	printf("%f\n", menseki);
}
