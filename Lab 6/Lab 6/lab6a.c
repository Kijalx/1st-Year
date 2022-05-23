#include <stdio.h>

int main()
{
	int age;
	const float PRICE_U10 = 3.5;
	const float PRICE_10_20 = 5;
	const float PRICE_29_64 = 7.5;
	const float PRICE_O64 = 4.5;
	printf("Please enter in your age: ", &age);
	scanf("%i", &age);

	switch (age / 5)
	{
	case 0:
	case 1:
		printf("Please pay %.2f", PRICE_U10);
		break;
	case 2:
	case 3:
		printf("Please pay %.2f", PRICE_10_20);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
		printf("Please pay %.2f", PRICE_29_64);
		break;

	default:
		printf("Please pay %.2f", PRICE_O64);
		break;
	}
		
}