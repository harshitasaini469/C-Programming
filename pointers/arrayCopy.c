#include <stdio.h>
#define SIZE 10
void main()
{
    int arr[SIZE], nums[SIZE];
    int *p = arr;
    int *q = nums;
    printf("input array elements \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", p + i);
    }
    // copying array
    for (int i = 0; i < SIZE; i++)
    {
        *(q + i) = *(p + i);
    }

    printf("the copied array is \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("nums[%d] =  %d\n", i, *(q + i));
    }
}