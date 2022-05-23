// Aleksander Kijewski
// 22/02/2021
// Lab8b
#include <stdio.h>

int main()
{
	int counter = 1;
	int product = 1;

	for (counter = 1; counter <= 15; counter+=2)
	{
			product *= counter;
	}
	printf("The sum is : %i", product);
	return 0;
}