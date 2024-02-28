#include "Rectangle.h"
#include <stdio.h>
void Rectangle::Size()
{
	menseki = radius * radius;
}

void Rectangle::Draw()
{
	printf("%f\n", menseki);
}
