// ALEKSANDER KIJEWSKI
// 08/02/2021
// LAB12D
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

float hypotenuse(float s1, float s2);

void main()
{
	int i;
	float hypot;
	float side1, side2;

	for (i = 1; i <= 3; i++)
	{
		printf("Enter side1 and side2 for triangle %i: ", i);
		scanf(" %f"" %f", &side1, &side2);
		hypot = hypotenuse(side1, side2);
		printf("The hypotenuse for %i is %f\n", i, hypot);
	}
}
float hypotenuse(float s1, float s2)
{
	float hyp;

	hyp = sqrt(pow(s1, 2) + pow(s2, 2));
	return hyp;
}