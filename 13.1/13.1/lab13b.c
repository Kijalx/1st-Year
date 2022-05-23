// ALEKSANDER KIJEWSKI
// 12/03/2021
// LAB13B
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
float calcLength(float x1, float x2, float y1, float y2);
float calcSlope(float x1, float x2, float y1, float y2);

float main()
{
	float x1, x2, y1, y2, slope;
	float length;

	for (int i = 0; i <= 4; i++)
	{
		printf("\nPlease enter the values accordingly\nx1: ");
		scanf(" %f", &x1);
		printf("\nx2: ");
		scanf(" %f", &x2);
		printf("\ny1: ");
		scanf(" %f", &y1);
		printf("\ny2: ");
		scanf(" %f", &y2);
		slope = calcSlope(x1, x2, y1, y2);
		printf("\nThe slope of the line is: %.2f\n", slope);
		length = calcLength(x1, x2, y1, y2);
		printf("The length of the line is: %.2f\n", length);
	}
	return 0;
}
float calcSlope(float x1, float x2, float y1, float y2)
{
	float slope;

	slope = (y2 - y1) / (x2 - x1);
	return slope;
}
float calcLength(float x1, float x2, float y1, float y2)
{
	float x = x2 - x1;
	float y = y2 - y1;

	float length = sqrt(pow(x, 2) + pow(y, 2));
	return length;
}