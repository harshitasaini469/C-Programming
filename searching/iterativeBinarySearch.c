// prerequesite for binary search --> the data in the array must be in sorted order
#include <stdio.h>
#define SIZE 10
void main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ele, exist = 0;
    int l = 0, mid, h = SIZE - 1;
    printf("enter the element to search in the array ");
    scanf("%d", &ele);

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (nums[mid] == ele)
        {
            exist = 1;
            break;
        }

        if (nums[mid] < ele)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    if (exist)
        printf("the element %d exist in the array", ele);
    else
        printf("the element %d does not exist in the array", ele);
}

// Time complexity --> O(logn)