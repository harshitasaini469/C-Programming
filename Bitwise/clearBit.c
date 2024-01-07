
#include <stdio.h>

void main()
{
    int num, n;
    printf("enter the number\n");
    scanf("%d", &num);

    printf("enter the bit to clear\n");
    scanf("%d", &n);
    printf("number before clearing %d bit : %d\n", n, num);
    num = (~(1 << n)) & num;
    printf("number after clearing %d bit : %d", n, num);
}