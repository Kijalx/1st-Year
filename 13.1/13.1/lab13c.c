// ALEKSANDER KIJEWSKI
// 12/03/2021
// LAB13C
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
int calcAvg(int int1, int int2);

int main()
{
	int x, y, avg;
	printf("Please enter 2 integers for the average: \n");
	scanf(" %i %i", &x, &y);
	avg = calcAvg(x, y);
	printf("Average of the 2 integers is: %i", avg);
}

int calcAvg(int int1, int int2)
{
	int average;
	average = (int1 + int2)/2;
	return average;
}