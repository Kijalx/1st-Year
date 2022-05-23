// Aleksander Kijewski
// 22/02/2021
// Lab7f
#include <stdio.h>

int main()
{
	int counter;
	int N = 1;
	int NN;
	int NNN;
	int NNNN;
	printf("N	10*N	100*N	1000*N\n\n");
	for (N = 1; N <= 5; N++)
	{
		NN = N * 10;
		NNN = N * 100;
		NNNN = N * 1000;
		printf("%i	%i	%i\t%i \n", N, NN, NNN, NNNN);
	}
	return 0;
}