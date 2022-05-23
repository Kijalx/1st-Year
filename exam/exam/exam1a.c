// ALEKSANDER KIJEWSKI
// 15/03/2021
// EXAM1A

#include <stdio.h>

int main()
{
	int num;

	printf("Please enter an integer: ");
	scanf(" %i", &num);

	if (num >= 0)
	{
		printf("is greater than or equal to 0");
	}
	else
	{
		printf("not greater than or equal to 0 ");
	}
	return 0;
}