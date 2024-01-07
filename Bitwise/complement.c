
#include <stdio.h>

void main()
{
    int num, count = 0, bits;
    printf("enter the number\n");
    scanf("%d", &num);

    printf("the number before complementing it is %d\n ", num);
    num = ~(num);
    printf("the number after complementing it is %d ", num);
}
