#include <stdio.h>

void main()
{
    int num,isPrime;

    printf("enter the number\n");
    scanf("%d",&num);

printf("prime factors are ");
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            isPrime=1;
            for(int j=2;j<i/2;j++)
            {
                if(i%j==0)
                {
                    isPrime=0;
                    break;
                }
            }
            if(isPrime) printf("%d ",i);
        }
    }
}