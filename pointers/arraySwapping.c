#include <stdio.h>
#define SIZE 10
void main()
{
    int arr[SIZE], nums[SIZE];
    int *p = arr;
    int *q = nums;
    int *temp;
    printf("input arr elements \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", p + i);
    }
    printf("input nums elements \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", q + i);
    }
    // copying array
    printf("arrays befor swapping\n");
    printf("arr array - ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    printf("nums array - ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(q + i));
    }

    temp = p;
    p = q;
    q = temp;

    printf("\nthe arrays after swapping \n");
    printf("arr array - ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    printf("nums array - ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d ", *(q + i));
    }
}