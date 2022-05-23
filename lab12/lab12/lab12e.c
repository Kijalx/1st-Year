// ALEKSANDER KIJEWSKI
// 08/02/2021
// LAB12E
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

void printSquare(int h);
void printTriangleInc();
void printTriableDec();

int main()
{
	char ch;
	int height;

	printf("A\t Print Square\n");
	printf("B\t Print Triangle increase\n");
	printf("C\t Print Triangle Decrease\n");
	scanf("%c", &ch);
	switch (ch)
	{
	case 'a':
	case 'A':
		printf("Please input the height of the square: ");
		scanf("%i", &height);
		printSquare(height);
		break;
	case 'b':
	case 'B':
		printTriangleInc();
		break;
	case 'c':
	case 'C':
		printTriableDec();
		break;
	default:
		printf("Incorrect entry\n");
	}
	return 0;
}

void printSquare(int h)
{
	int i, j;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < h; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printTriangleInc()
{
	int i, j;
	const int SIZE = 6;

	for (i = 1; i <= SIZE ; i++) 
	{
		for (j = 1; j <= i; j++) 
		{
			printf("*");
		}
		
		printf("\n");
	}
}
void printTriableDec()
{
	int i, j;
	const int SIZE = 6;

	for (i = SIZE; i >= 1; i--) {
		for (j = 1; j < i; j++) {
			printf("*");
		}
		
		printf("\n");
	}
}