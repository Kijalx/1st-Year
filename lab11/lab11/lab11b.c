// ALEKSANDER KIJEWSKI
// 08/03/2021
// LAB11B

#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES

int main()
{
	float sa1, sa2, sa3, sa4, v1, v2, v3, v4, r1, r2, r3, r4;
	
	printf("Please enter 4 radii: ");
	scanf(" %f %f %f %f", &r1, &r2, &r3, &r4);
	
	sa1 = 4 * M_PI * pow(r1, 2);
	sa2 = 4 * M_PI * pow(r2, 2);
	sa3 = 4 * M_PI * pow(r3, 2);
	sa4 = 4 * M_PI * pow(r4, 2);

	v1 = 4 * M_PI * pow(r1, 3);
	v2 = 4 * M_PI * pow(r2, 3);
	v3 = 4 * M_PI * pow(r3, 3);
	v4 = 4 * M_PI * pow(r4, 3);
	printf("Sphere		Radius		Surface Area		Volume\n");
	printf("1		%.2f		%.2f			%.2f\n", r1, sa1, v1);
	printf("2		%.2f		%.2f			%.2f\n", r2, sa2, v2);
	printf("3		%.2f		%.2f			%.2f\n", r3, sa3, v3);
	printf("4		%.2f		%.2f			%.2f\n", r4, sa4, v4);
}