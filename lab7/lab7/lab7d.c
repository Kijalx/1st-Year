#include <stdio.h>

int main()
{
	int counter = 0;
	int sum = 0;

	while (counter <= 10)
	{
		++counter;
		sum = sum + counter;
	}
	printf("sum = %i", sum);

}