#include <stdio.h>
void printNatural(int);
void main()
{
    int ul;
    printf("enter the upper limit ");
    scanf("%d", &ul);

    printf("the natural numbers between 1 to %d are\n", ul);
    printNatural(ul);
}
void printNatural(int ul)
{
    if (ul == 0)
        return;
    printNatural(ul - 1);
    printf("%d ", ul);
}