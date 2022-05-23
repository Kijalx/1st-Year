#include <stdio.h>

int main()
{
	float euro;
	int currency;
	float total;
	const float dollar = 1.2264, sterling = .6882, japanyen = 136.45;

	printf("Enter euros to convert: ");
	scanf("%.4f", &euro);

	if (euro > 0) {
		printf("Please enter a correct amount of euro.");
	}
	else {
		printf("	Currency\n");
		printf("1	US Dollar		%.4f\n", dollar);
		printf("2	Sterling		%.4f\n", sterling);
		printf("3	Japanese Yen		%.4f\n", japanyen);

		printf("Please enter the number corresponding to the conversion: ");

		scanf("%i", &currency);

		switch (currency) {
		case 1:
			total = euro * dollar;
			printf("Your total is %.4f", total);
			break;
		case 2:
			total = euro * sterling;
			printf("Your total is %.4f", total);
			break;
		case 3:
			total = euro * japanyen;
			printf("Your total is %.4f", total);
			break;
		default:
			printf("Please enter a valid number.");
			break;
		}
	
	}
}