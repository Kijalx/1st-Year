// Aleksander Kijewski
// 2/2/21
// Lab 4b
#include <stdio.h>
int main()
{
	int x;

	printf("Enter student grade:\n");
	scanf("%d", &x);

	if (x >= 40)
	{
		printf("Student has passed\n\n", x);
	}
	else
	{
		printf("Student failed\n\n", x);
	}
	return 0;
}
