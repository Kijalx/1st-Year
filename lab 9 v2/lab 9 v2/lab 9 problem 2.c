// ALEKSANDER KIJEWSKI
// 26/02/2021
// LAB 9 PROBLEM 2
#include <stdio.h>
int main()
{
	int com_length, max_length, min_length;
	int total_length = 0;
	int no_parts = 0;
	float avg_length;

	printf("Enter component length in mm (-1 TO END): ");
	scanf("%i", &com_length);
	while (com_length != -1)
	{
		no_parts++;
		total_length += com_length;
		if (com_length < min_length)
		{
			min_length = com_length;
		}
		if (com_length > max_length)
		{
			max_length = com_length;
		}
		printf("Enter component length in mm (-1 TO END): ");
	}
	if (no_parts != 0)
	{
		avg_length = (float)total_length / no_parts;
		printf("Number of parts tested: %i", no_parts);
		printf("Average length of parts: %i", avg_length);
		printf("The max length of parts: %i", max_length);
		printf("The minimum length of parts: %i", min_length);
	}
	else
	{
		printf("No entries");
	}
	return 0;
}