// Aleksander Kijewski
// 22/02/2021
// Lab8d
#include <stdio.h>

int main()
{
	int i, factorial = 1;
	int n = 10;

	printf("Factorials.");

	for (i = 1; i <= n; i++) 
	{
		factorial *= i;
		printf("%i! = %i\n", i, factorial);
	}
	return 0;
}