// Aleksander Kijewski
// 2/2/21
// Lab 4c
#include <stdio.h>
int main()
{
	int x,y;

	printf("Enter two integers:\n",&x, &y);
	scanf("%d%d", &x, &y);

	if (x == y)
	{
		printf("%d is equal to %d\n\n", x,y);
	}
	else
	{
		printf("%d is not equal to %d\n\n", x,y);
	}
	return 0;
}
