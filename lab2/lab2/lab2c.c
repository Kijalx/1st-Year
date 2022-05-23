#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int age;
	
	printf("Please enter your age: ");
	scanf("%i", &age);

	printf("Your age is %i\n\n", age);
	return 0;
}