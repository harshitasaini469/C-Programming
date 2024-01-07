#include <stdio.h>
void main()
{
    int num;

    printf("enter num \n");
    scanf("%d", &num);

    if (num & 1)
        printf("the last bit is set to 1");
    else
        printf("the last bit is set to 0");
}