// Aleksander Kijewski
// 8/2/21
// Lab 5a
#include <stdio.h>

int main()
{
	float tempC;
	const float MUL = 1.8;
	const int OFFSET = 32;

	printf("Please enter degrees in celcius: ", &tempC);
	scanf("%2f", &tempC);

	float tempF = MUL * tempC + OFFSET;
	printf("Your degrees in farenheit is: %2f", tempF);

	return 0;
}