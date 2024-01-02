#include <stdio.h>
#define SIZE 3
void main()
{
    int a[][SIZE] = {{1, 2, 3}, {0, 5, 6}, {0, 0, 9}};
    int isUpper = 1;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j < i && a[i][j] != 0)
                isUpper = 0;
        }
    }
    if (isUpper)
        printf("the matrix is upper diagonal");
    else
        printf("the matrix is not upper diagonal");
}