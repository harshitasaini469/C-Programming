
#include <stdio.h>

void main()
{
    int num, n;
    printf("enter the number\n");
    scanf("%d", &num);

    printf("enter the bit to set\n");
    scanf("%d", &n);
    printf("number before setting %d bit : %d\n", n, num);
    num = (1 << n) | num;
    printf("number after setting %d bit : %d", n, num);
}