#include <stdio.h>
void main()
{
    int n,i, sum = 0;
    printf("enter the range\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i+=2)
    {
    
            sum += i;
    }
    printf("the sum is %d", sum);
}