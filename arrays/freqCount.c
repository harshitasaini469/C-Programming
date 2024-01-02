#include <stdio.h>
void main()
{
    int arr[20], freq[20], count, size;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the elements in the array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < size - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; // not count frequency of same element again
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            printf("frequency of %d is %d\n", arr[i], freq[i]);
        }
    }
}