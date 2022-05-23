// ALEKSANDER KIJEWSKI
// 05/03/2021
// LAB10B
#include<stdio.h>

int main()
{
	char shape;
    int height, length;
    int row, col;
	printf("A.\tSquare\n");
	printf("B.\tTriangle Increase\n");
	printf("C.\tTriangle Decrease\n");
	printf("Please choose: ");
	scanf(" %c", &shape);

	switch (shape)
	{
	case 'a':
	case 'A':
        printf("Enter square height and length: ");
        scanf("%d", &height);

        row = 0;
        while (row < height) {
            col = 0;
            while (col < length) 
			{
                if (row == 0 || row == height - 1 || col == 0 || col == length - 1) 
				{
                    printf("*");
                }
                else 
				{
                    printf(" ");
                }

                col = col + 1;
            }
            printf("\n");
            row = row + 1;
        }
		break;
	case 'b':
	case 'B':
        int i, space, rows, k = 0;
        rows = 6;
        for (i = 1; i <= rows; ++i, k = 0) {
            for (space = 1; space <= rows - i; ++space) {
                printf("  ");
            }
            while (k != 2 * i - 1) {
                printf("* ");
                ++k;
            }
            printf("\n");
        }
		break;
	case 'c':
	case 'C':
		break;
	default:
		break;
	}
}