#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 0, 0}, {4, 5, 0}, {7, 8, 9}};
    int isLower = 1;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j > i && a[i][j] != 0)
                isLower = 0;
        }
    }
    if (isLower)
        printf("the matrix is lower diagonal");
    else
        printf("the matrix is not lower diagonal");
}