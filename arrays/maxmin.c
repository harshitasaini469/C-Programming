#include <stdio.h>
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7,11,3,6};
    int min, max;
    max = nums[0];
    min = nums[0];

    for (int i = 1; i < 10; i++)
    {
        if (nums[i] > max)
            max = nums[i];

        if (nums[i] < min)
            min = nums[i];
    }

    printf("the max is %d and min is %d", max, min);
}