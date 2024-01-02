#include <stdio.h>
#define SIZE 10
void rightRotate(int arr[]);
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int n;
    printf("enter no. of times to right rotate array\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        rightRotate(nums);
    }

    printf("array after rotation\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
    }
}
void rightRotate(int arr[])
{
    int temp = arr[SIZE - 1];
    for (int i = SIZE - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}