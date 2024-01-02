#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[SIZE][SIZE], mul = 0, sum = 0, i = 0, j = 0, k = 0;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < SIZE; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("the multiplication of the matrices is : \n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}