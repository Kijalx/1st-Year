// Aleksander Kijewski
// 8/2/21
// Lab 5e
#include <stdio.h>

int main()
{
	char vw;
	printf("Enter any character: ");
	scanf("%c", &vw);

	if (vw == 'a' || vw == 'A' || vw == 'e' || vw == 'E'
		|| vw == 'i' || vw == 'I' || vw == 'o' || vw == 'O'
		|| vw == 'u' || vw == 'U')
	{
		printf("%c Is a vowel", vw);
	}
	else {
		printf("%c Is a constant", vw);
	}

	return 0;
}