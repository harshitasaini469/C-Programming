#include <stdio.h>
int isEven(int num)
{
    if (num & 1)
    {
        return 0;
    }
    else
        return 1;
}
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    printf("the number %d is %s", num, isEven(num) ? "even" : "not even");
}