// ALEKSANDER KIJEWSKI
// 08/03/2021
// LAB11B

#include<stdio.h>
#include<math.h>

int main()
{
	char ch;
	float S, sine, C, cosine, T, tann;
	printf("Choose one of the following.\n");
	printf("S Sine\n");
	printf("C Cosine\n");
	printf("T Tan\n");
	scanf(" %c", &ch);

	switch (ch)
	{
	case 's':
	case 'S':
		printf("Please enter an angle: ");
		scanf("%f", &S);
		sine = sin(S);
		printf("sine(%f) = %f", S, sine);
		break;
	case 'c':
	case 'C':
		printf("Please enter an angle: ");
		scanf("%f", &C);
		cosine = cos(C);
		printf("cos(%f) = %f", C, cosine);
		break;
	case 't':
	case 'T':
		printf("Please enter an angle: ");
		scanf("%f", &T);
		tann = tan(T);
		printf("tan(%f) = %f", T, tan);
		break;
	}
	return 0;
}