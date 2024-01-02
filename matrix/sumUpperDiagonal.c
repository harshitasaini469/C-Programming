#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {0, 5, 6}, {0, 0, 9}};
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j > i)
                sum += a[i][j];
        }
    }
    printf("the sum of upper diagonal elements is %d", sum);
}