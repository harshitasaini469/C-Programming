#include <stdio.h>
void main()
{
    int arr[] = {5, 2, 1, 8, 4, 9, 7, 11, 3, 6};

    int max1, max2;

    max1 = max2 = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("the second largest is %d", max2);
}