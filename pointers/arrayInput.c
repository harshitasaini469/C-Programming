#include <stdio.h>
#define SIZE 10
void main()
{
    int arr[SIZE];
    int *p = arr;

    printf("input array elements \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", p + i);
    }
    printf("the array is \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] =  %d\n", i, *(p + i));
    }
}