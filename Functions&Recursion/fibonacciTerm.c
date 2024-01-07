#include <stdio.h>
#include <math.h>
int fibonacci(int);
void main()
{
    int num;
    printf("enter the number of term to generate ");
    scanf("%d", &num);

    printf("the %dth fibonacci term is %d ", num, fibonacci(num));
}
int fibonacci(int num)
{

    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;

    return fibonacci(num - 1) + fibonacci(num - 2);
}