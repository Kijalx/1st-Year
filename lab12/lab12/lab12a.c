// ALEKSANDER KIJEWSKI
// 08/02/2021
// LAB12A
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

float computeArea(float radius);

void main()
{
	float r, a;

	printf("Please enter the radius of the circle: ");
	scanf(" %f", &r);

	a = computeArea(r);

	printf("%.2f Is the area of the circle", a);
}

float computeArea(float radius)
{
	float area;

	area = pow(radius,2) * M_PI;
	return area;
}