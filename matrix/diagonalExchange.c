#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0, temp;
    for (int i = 0; i < SIZE; i++)
    {
        temp = a[i][i];
        a[i][i] = a[i][SIZE - 1 - i];
        a[i][SIZE - 1 - i] = temp;
    }
     printf("the new matrix is : \n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}