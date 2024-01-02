#include <stdio.h>
void main()
{
    int freq[10], size = 10, count = 0;
    int arr[] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};
    for (int i = 0; i < size; i++)
    {
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
    printf("the unique elements in the array are\n");
    for (int i = 0; i < size; i++)
    {
        if (freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}