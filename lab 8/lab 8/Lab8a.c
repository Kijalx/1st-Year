// Aleksander Kijewski
// 22/02/2021
// Lab8a
#include <stdio.h>

int main()
{
	int counter = 10;
	int sum = 0;
	do
	{
		if (counter % 2 == 0) {
			sum += counter;
		}
		counter++;
	} while (counter <= 20);
	printf("%i\n", sum);
	return 0;
}