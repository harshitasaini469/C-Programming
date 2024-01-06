#include <stdio.h>
#define SIZE 10
void main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    int *q, temp;

    printf("the array is \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] =  %d\n", i, *(p + i));
    }
    q = &arr[SIZE - 1];
    printf("the reverse of the array\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] =  %d\n", i, *(q - i));
    }
}