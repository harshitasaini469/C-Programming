#include <stdio.h>
#include <math.h>
int factorial(int);
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    printf("the reverse of %d is %d ", num, factorial(num));
}
int factorial(int num)
{

    if (num == 1)
        return 1;
    return num * factorial(num - 1);
}