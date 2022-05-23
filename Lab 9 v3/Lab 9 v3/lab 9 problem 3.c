// ALEKSANDER KIJEWSKI
// 26/02/2021
// LAB 9 PROBLEM 3
#include <stdio.h>
int main()
{
	int weekly = 200;
	float weekplus = 0.09;
	int max = 800;
	float sales;
	float salary;

	printf("Please enter your sales in pounds(-1 to end): ");
	scanf("%i", &sales);
	while (sales != -1)
	{
		if (sales <= max)
		{
			salary = sales * 0.09 + weekly;
			printf("Your salary is: %.2f\n", salary);
		}
		else
		{
			printf("Sorry the maximum sales is %i\n", max);
		}
		printf("\nPlease enter your sales in pounds(-1 to end): ");
		scanf("%i", &sales);
	}
}