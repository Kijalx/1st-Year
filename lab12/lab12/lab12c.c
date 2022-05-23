// ALEKSANDER KIJEWSKI
// 08/02/2021
// LAB12C
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

void fillCharacter(int a, char b);

void main()
{
	char symbol;
	int num;

	printf("Please enter the character youd like to use: ");
	scanf(" %c", &symbol);
	printf("Please enter the amount of squares youd like to use: ");
	scanf(" %i", &num);
	fillCharacter(num,symbol);
}
void fillCharacter(int n, char c)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf(" %c", c);
		}
		printf("\n");
	}
}