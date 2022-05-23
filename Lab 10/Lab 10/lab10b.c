// ALEKSANDER KIJEWSKI
// 05/03/2021
// LAB10B
#include<stdio.h>

int main()
{
    int col, row;
    const int SIZE = 6;

  

    for (row = 1; row <= SIZE; ++row) {
        for (col = 1; col <= row; ++col) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (col = rows; col >= 1; col--) 
    {
        for (size = 1; size <= col; size++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}