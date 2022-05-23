// ALEKSANDER KIJEWSKI
// 15/03/2021
// EXAM4

#include <stdio.h>

int main()
{
	int num, ans;
	int dev = 10;

	printf("Please enter a number (-1 to exit): ");
	scanf(" %i", &num);

	while (num != -1)
	{
		if (num%10 == 0)
		{
			printf("%i is divisible by 10", num);
		}
		else
		{
			printf("%i is not divisible by 10", num);
		}
		printf("\nPlease enter a number (-1 to exit): ");
		scanf(" %i", &num);
	}
	return 0;
}