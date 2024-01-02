#include <stdio.h>
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int len = 10;
    int pos;
    printf("enter the position to delete the element from\n");
    scanf("%d", &pos);

    printf("deleting");
    for (int i = pos - 1; i < len - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    len--;
    printf("after deletion\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", nums[i]);
    }
}