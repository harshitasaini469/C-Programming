#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += a[i][j];
        }
        printf("the sum of row %d elements is %d\n", i, sum);
    }
    printf("----------------------------------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += a[j][i];
        }
        printf("the sum of col %d elements is %d\n", i, sum);
    }
}