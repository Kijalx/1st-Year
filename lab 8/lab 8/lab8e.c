// Aleksander Kijewski
// 22/02/2021
// Lab8e
#include <stdio.h>

int main()
{
	int i, factorial = 1;
	int n = 10;

	do 
	{
		factorial *= i;
		printf("%i! = %i\n", i, factorial);
		i++;
	} while (i <= n);
	return 0;
}