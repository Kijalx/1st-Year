// ALEKSANDER KIJEWSKI
// 15/03/2021
// EXAM1B

#include <stdio.h>

int main()
{
	int num;
	
	for (int i = 1; i <= 4; i++)
	{
		printf("Please enter an integer: ");
		scanf(" %i", &num);

		if (num >= 0)
		{
			printf("is greater than or equal to 0\n");
		}
		else
		{
			printf("not greater than or equal to 0\n");
		}
	}
	return 0;
}