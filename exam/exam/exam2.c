// ALEKSANDER KIJEWSKI
// 15/03/2021
// EXAM2

#include <stdio.h>

int main()
{
	char ch;
	int num;

	printf("Please enter a charachter you would like to print: ");
	scanf(" %c", &ch);
	printf("Please enter how many times you would like it: ");
	scanf(" %i", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%c", ch);
	}
	return 0;
}