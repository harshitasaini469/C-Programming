#include <stdio.h>
void main()
{
    int num1, num2;
    int *p1, *p2, temp;
    p1 = &num1;
    p2 = &num2;
    printf("enter number 1 and number 2 \n");
    scanf("%d%d", p1, p2);

    printf("before swapping p1 = %d and p2 = %d \n", *p1, *p2);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("after swapping p1 = %d and p2 = %d \n", *p1, *p2);
}