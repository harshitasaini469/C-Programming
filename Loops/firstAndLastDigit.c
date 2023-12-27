#include <stdio.h>
void main()
{
    int n;

    printf("enter the number");
    scanf("%d",&n);

    printf("the last digit of the number is %d\n",n%10);
    printf("the first digit of the number is ");
    while (n>10)
    {
        n=n/10;
    }
    printf("%d",n);
}