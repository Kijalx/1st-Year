// Aleksander Kijewski
// 8/2/21
// Lab 5f
#include <stdio.h>

int main()
{
	int menunum;

	printf("Please enter one of the following options: \n");

	printf("1.	Hill 16\n");
	printf("2.	Hogan Stand\n");
	printf("3.	Daven Stand\n");
	printf("4.	Cusack Stand\n");
	printf("\n");
	printf("0.	Exit\n");

	scanf("%i", &menunum);
	if (menunum == 1) {
		printf("You have a place in Hill 16.\n");
	}
	else if (menunum == 2) {
		printf("You have a place in the Hogan Stand.\n");
	}
	else if (menunum == 3) {
		printf("You have a place in the Daven Stand.\n");
	}
	else if (menunum == 4) {
		printf("You have a place in the Cusack stand.\n");
	}
	else if (menunum == 0) {
		printf("Exit.\n");
	}
	return 0;
}