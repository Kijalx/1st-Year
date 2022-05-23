// Aleksander Kijewski
// 22/02/2021
// Lab8f
#include <stdio.h>

int main()
{
	char symbol;
	int number, times;

	printf("Please enter a symbol. \n");
	scanf(" %c", &symbol);
	printf("Please enter a number: ");
	scanf(" %i", &number);

	for (times = 0; times < number; ++times)
	{
			printf("%c", symbol);
	}
	return 0;
}