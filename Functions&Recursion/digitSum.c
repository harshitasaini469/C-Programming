#include <stdio.h>
#include <math.h>
int digitSum(int);
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    printf("the sum of digits of %d is %d ", num, digitSum(num));
}
int digitSum(int num)
{

    if (num == 0)
        return 0;
    return (num % 10) + digitSum(num / 10);
}