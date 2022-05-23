// Aleksander Kijewski
// 01/02/2021
// Lab3b
#include<stdio.h>

int main()
{
	int x,y,z,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	x = 8;
	y = 3;
	z = -5;
	s1 = x+y+z;
	printf("x + y + z = %i\n", s1);
	s2 = 2*y+3*(x-z);
	printf("2 * y + 3 * (x - z) = %i\n", s2);
	s3 = x/y;
	printf("x / z = %i\n", s3);
	s4 = y%x;
	printf("x %% y = %i\n", s4);
	s5 = x/z;
	printf("x / z = %i\n", s5);
	s6 = z%x;
	printf("x %% z = %i\n", s6);
	s7 = x*y/z;
	printf("x * y / z = %i\n", s7);
	s8 = x*(y/z);
	printf(" x * (y / z) = %i\n", s8);
	s9 = y/100*(x*z);
	printf("(x * z) xs x perzent of y = %i\n", s9);
	s10 = x*(y%y);
	printf("x * (z %% y) = %i\n\n", s10);
	return 0;
}