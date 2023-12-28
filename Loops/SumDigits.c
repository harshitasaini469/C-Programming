#include <stdio.h>
void main()
{
    int n,sum=0,temp,rem;

    printf("enter the number\n");
    scanf("%d",&n);

    temp=n;

    while (temp>0)
    {
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    printf("the sum of the digits of %d is %d",n,sum);

}