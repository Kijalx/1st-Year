// ALEKSANDER KIJEWSKI
// 08/03/2021
// LAB11A

#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846

int main()
{
	float radius;
	float volume;

	printf("Please enter a radius: ");
	scanf(" %f", &radius);

	volume = (4/3) * M_PI * pow(radius, 3);
	printf("The volume of the sphere is %f", volume);
	return 0;
}