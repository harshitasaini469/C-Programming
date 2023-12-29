#include <stdio.h>
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int len = sizeof(nums) / sizeof(nums[0]);

    int pos, ele;
    printf("enter the position to enter the element\n");
    scanf("%d", &pos);
    printf("enter the element\n");
    scanf("%d", &ele);

    for (int i = len; i >= pos; i--)
    {
        nums[i] = nums[i - 1];
    }
    nums[pos - 1] = ele;
    len++;
    printf("after insertion\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]);
    }
}