// ALEKSANDER KIJEWSKI
// 26/02/2021
// LAB 9 PROBLEM 1
#include <stdio.h>
int main()
{
	int hrs_worked;
	float overtime;
	float hr_rate;
	float gross;
	const int REG_HS = 40;
	const float OVERTIME_RATE = 1.5;

	printf("Please enter the hours you have worked: ");
	scanf("%i", &hrs_worked);

	printf("Please enter your hourly rate: ");
	scanf("%f", &hr_rate);
	while (hrs_worked != -1)
	{
		if (hrs_worked <= 40){
			gross = hrs_worked * hr_rate;
			printf("Your gross wage is : %.2f\n", gross);
		}
		else {
			overtime = hrs_worked - REG_HS;
			gross = REG_HS * hr_rate + overtime * hr_rate * OVERTIME_RATE;
			printf("Your gross wage is : %.2f\n", gross);
		}
	}
	return 0;
}