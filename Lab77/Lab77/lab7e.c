// Aleksander Kijewski
// 22/02/2021
// Lab7e
#include <stdio.h>

int main()
{
	int counter;
	int userinput;

	printf("Please enter a number between 1-100: ");
	scanf("%i", &userinput);

	for (counter = userinput; counter <= userinput + 5; counter++)
	{
		printf("%i \n", counter);
	}
	return 0;
}