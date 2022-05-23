// Aleksander Kijewski
// 2/2/21
// Lab 4e
#include <stdio.h>
int main()
{
	int x;

	printf("Enter in the amount of hours you worked:\n", &x);
	scanf("%d", &x);

	if (x <= 40)
	{
		printf("Your wages are %d", x*10);
	}
	else
	{
		printf("Your wages + overtime are %d", x*10 + (x-40)*(10*2));
	}
	return 0;
}
