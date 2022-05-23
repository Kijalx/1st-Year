// Aleksander Kijewski
// 22/02/2021
// Lab7d
#include <stdio.h>

int main()
{
	int counter = 1;
	int sum = 0;

	while (counter <= 10)
	{
		sum = sum + counter;
		counter++;
	}
	printf("sum = %i", sum);
	return 0;
}