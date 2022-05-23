// ALEKSANDER KIJEWSKI
// 08/02/2021
// LAB12B
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

float computeArea(float radius);
float computeCircum(float rad);

void main()
{
	float r1, r2, r3, r4, r5, a1, a2, a3, a4, a5, c1, c2, c3, c4, c5;

	printf("Enter first radius: ");
	scanf(" %f", &r1);
	printf("Enter second radius: ");
	scanf(" %f", &r2);
	printf("Enter third radius: ");
	scanf(" %f", &r3);
	printf("Enter fourth radius: ");
	scanf(" %f", &r4);
	printf("Enter fifth radius: ");
	scanf(" %f", &r5);
	
	a1 = computeArea(r1);
	a2 = computeArea(r2);
	a3 = computeArea(r3);
	a4 = computeArea(r4);
	a5 = computeArea(r5);
	c1 = computeCircum(r1);
	c2 = computeCircum(r2);
	c3 = computeCircum(r3);
	c4 = computeCircum(r4);
	c5 = computeCircum(r5);
	printf("\nCircle\tRadius\tArea\tCircumference");
	printf("\n1\t%.2f\t%.2f\t%.2f", r1, a1, c1);
	printf("\n2\t%.2f\t%.2f\t%.2f", r2, a2, c2);
	printf("\n3\t%.2f\t%.2f\t%.2f", r3, a3, c3);
	printf("\n4\t%.2f\t%.2f\t%.2f", r4, a4, c4);
	printf("\n5\t%.2f\t%.2f\t%.2f", r5, a5, c5);
}
float computeArea(float radius)
{
	float area;

	area = pow(radius, 2) * M_PI;
	return area;
}
float computeCircum(float rad)
{
	float circum;

	circum = 2 * M_PI * rad;
	return circum;
}