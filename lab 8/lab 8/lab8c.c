// Aleksander Kijewski
// 22/02/2021
// Lab8c
#include <stdio.h>

int main()
{
	int userinput;
	int repeat = 1;

	while (repeat <= 7)
	{
		printf("Please enter a number: \n");
		scanf("%i", &userinput);

		if (userinput <= 10 && userinput > 0) {
			printf("Your number is between 1 and 10.");
		}
		else {
			printf("Your number is invalid.");
		}
		repeat++;
	}
	return 0;
}