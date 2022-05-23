// Aleksander Kijewski
// 8/2/21
// Lab 5b
#include <stdio.h>

int main()
{
	float r;
	const float PI = 3.14;
	const float MUL = 1.33;

	printf("Please enter a Radius: ", &r);
	scanf("%2f", &r);

	float v = MUL * PI * (r * r * r);
	printf("Volume of the sphere: %2f", v);

	return 0;
}