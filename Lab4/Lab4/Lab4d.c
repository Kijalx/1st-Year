// Aleksander Kijewski
// 2/2/21
// Lab 4d
#include <stdio.h>
int main()
{
	int x;

	printf("Enter in a integer:\n", &x);
	scanf("%d", &x);

	if (x%2 == 0)
	{
		printf("%d is even\n\n", x);
	}
	else
	{
		printf("%d is odd\n\n", x);
	}
	return 0;
}
