#include <stdio.h>
void main()
{
    int n, i, r, temp, count = 0;

    printf("enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    printf("the no. of digits in %d are %d", n, count);
}