#include <stdio.h>

void main()
{
    int num, temp, i;
    int freq[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("enter the number\n");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        i = temp % 10;
        ++freq[i];
        temp = temp / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the frequency of %d is %d\n", i, freq[i]);
    }
}