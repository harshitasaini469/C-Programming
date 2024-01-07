#include <stdio.h>
#define SIZE 10
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int ele = 0, exist = 0;
    printf("enter the element to search in the array ");
    scanf("%d", &ele);

    for (int i = 0; i < SIZE; i++)
    {
        if (nums[i] == ele)
        {
            exist = 1;
            break;
        }
    }

    if (exist)
        printf("the element %d exist in the array", ele);
    else
        printf("the element %d does not exist in the array", ele);
}

// Time complexity --> O(n)