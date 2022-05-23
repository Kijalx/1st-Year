// Aleksander Kijewski
// 02/02/2021
// Lab3a
#include<stdio.h>

int main()
{
	int x, poly;

	printf("Please enter number :\n");
	scanf("%d", &x);
	poly = 4*x*x-1*x+6;

	printf("*************************************\n");
	printf("Please enter a number:  %i\n", x);
	printf("*************************************\n");
	printf("The answer for x is %i\n", poly);
	printf("*************************************\n\n");

	return 0;
}