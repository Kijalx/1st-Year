// Aleksander Kijewski
// 2/2/21
// Lab 4a
#include <stdio.h>
int main()
{
	int x;

	printf("Enter student grade: ");
	scanf("%d",&x);

	if (x >= 40)
	{
		printf("Student has passed\n\n",x);
	}
	return 0;

}
