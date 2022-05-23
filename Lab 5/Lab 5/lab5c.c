// Aleksander Kijewski
// 8/2/21
// Lab 5c
#include <stdio.h>

int main()
{
	char grade;
	printf("Please enter a grade A, B, C, D or E: ", &grade);
	scanf("%c", &grade);

	if (grade == 'A' || grade == 'a') {
		printf("Excellent.");
	}
	else if (grade == 'B' || grade == 'b') {
		printf("Good.");
	}
	else if (grade == 'C' || grade == 'c') {
		printf("Fair.");
	}
	else if (grade == 'D' || grade == 'd') {
		printf("Poor.");
	}
	else if (grade == 'E' || grade == 'e') {
		printf("Failure.");
	}
	return 0;
}