// Aleksander Kijewski
// 8/2/21
// Lab 5d
#include <stdio.h>

int main()
{
	char grade;
	printf("Please enter a grade A, B, C, D or E: ", &grade);
	scanf("%c", &grade);
	switch(grade,toupper(grade))
	{
	case 'A':
		printf("Excellent.");
		break;
	case 'B':
		printf("Good.");
		break;
	case 'C':
		printf("Fair.");
		break;
	case 'D':
		printf("Poor.");
		break;
	case 'E':
		printf("Failure.");
		break;
	default:
		printf("Not a grade.");
		break;
	}
	return 0;
}