#include <stdio.h>
#define SIZE 3
void main()
{
    int arr[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int(*p)[SIZE] = arr;
    printf("the array is \n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("arr[%d][%d] = %d ", i, j, *(p[i]+j));
        }
        printf("\n");
    }
}