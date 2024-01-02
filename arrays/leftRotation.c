#include <stdio.h>
#define SIZE 10
void leftRotate(int arr[]);
void main()
{
    int nums[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};
    int n;
    printf("enter no. of times to left rotate array\n");
    scanf("%d", &n);

    for (int i = 0; i < n ; i++)
    {
        leftRotate(nums);
    }

    printf("array after rotation\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
    }
}
void leftRotate(int arr[])
{
    int temp = arr[0];
    for (int i = 0; i < SIZE - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = temp;
}