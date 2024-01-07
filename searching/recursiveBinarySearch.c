#include <stdio.h>
#define SIZE 10
int BinarySearch(int nums[], int key, int l, int h)
{
    if (l <= h)
    {
        int mid = (l + h) / 2;

        if (nums[mid] == key)
            return 1;

        if (nums[mid] < key)
        {
           return BinarySearch(nums, key, mid + 1, h);
        }
        else
        {
           return BinarySearch(nums, key, l, mid - 1);
        }
    }

    return 0;
}
void main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ele = 0, exist = 0;
    printf("enter the element to search in the array ");
    scanf("%d", &ele);

    exist = BinarySearch(nums, ele, 0, SIZE - 1);

    if (exist)
        printf("the element %d exist in the array", ele);
    else
        printf("the element %d does not exist in the array", ele);
}

// Time complexity --> O(n)