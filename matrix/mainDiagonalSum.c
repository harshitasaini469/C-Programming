#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += a[i][i];
    }
    printf("the sum of main diagonal elements is %d", sum);
}