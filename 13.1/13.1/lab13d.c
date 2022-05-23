// ALEKSANDER KIJEWSKI
// 12/03/2021
// LAB13D
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

float calcQuad1(float a, float b, float c);
float calcQuad2(float a, float b, float c);
int main()
{
	float a, b, c, x1, x2;
	for (int i = 0; i < 3; i++)
	{
		printf("Please enter a: ");
		scanf(" %f", &a);
		printf("Please enter b: ");
		scanf(" %f", &b);
		printf("Please enter c: ");
		scanf(" %f", &c);
		x1 = calcQuad1(a, b, c);
		x2 = calcQuad2(a, b, c);
		printf("The two values for x are\nX = %.2f\nX = %.2f\n", x1, x2);
	}
}

float calcQuad1(float a, float b, float c)
{
	float pwr = pow(b, 2);
	float ac = 4 * a * c;
	float a2 = 2 * a;
	float x = (-b + sqrt(pwr - ac)) / a2;

	return x;
}
float calcQuad2(float a, float b, float c)
{
	float pwr = pow(b, 2);
	float ac = 4 * a * c;
	float a2 = 2 * a;
	float x = (-b - sqrt(pwr - ac)) / a2;

	return x;
}