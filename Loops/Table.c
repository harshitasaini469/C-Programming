#include <stdio.h>
void main()
{
    int a,i;
    printf("enter the number");
    scanf("%d", &a);
    printf("the table is\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
}