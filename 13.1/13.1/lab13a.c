// ALEKSANDER KIJEWSKI
// 12/03/2021
// LAB13A
#include <stdio.h>

int basePower(int n, int p);

int main()
{
	int num;
	int pow;
	int ans;
	int i;

	printf("Please enter a base(0 to end): ");
	scanf(" %i", &num);
	for(i = 0; num > 0; i++)
	{
		printf("Please enter a exponent: ");
		scanf(" %i", &pow);
		ans = basePower(num, pow);
		printf("%i ^ %i = %.i\n", num, pow, ans);
		printf("Please enter a base(0 to end): ");
		scanf(" %i", &num);
	}
}

int basePower(int n, int p)
{
	for (int i = 0; i < p; i++)
	{
		n = n * n;
		i++;
	}
	return n;
}