#include <stdio.h>
#include <math.h>
int reverse(int);
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    printf("the reverse of %d is %d ", num, reverse(num));
}
int reverse(int num)
{
    int digit = (int)log10(num);

    if (num == 0)
        return 0;
    return (num % 10) * pow(10, digit) + reverse(num / 10);
}