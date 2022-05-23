// ALEKSANDER KIJEWSKI
// 05/03/2021
// LAB10A
#include<stdio.h>

int main() 
{
    int width;
    int row, col;

    printf("Enter a width: ");
    scanf("%d", &width);
    for (row = 1; row <= width; row++) {
        for (col = 1; col <= width; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}