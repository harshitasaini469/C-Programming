#include <stdio.h>
void main()
{
    int num1, num2;
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    printf("enter number 1 and number 2 ");
    scanf("%d%d", p1, p2);

    printf("addition of %d and %d is %d", num1, num2, *p1 + *p2);
}