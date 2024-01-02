#include <stdio.h>
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int size = 10;
    int i = 0, j = size - 1, temp;
    printf("the array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf(" \n");
    while (i < j)
    {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
    printf("the reverse of the array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
}