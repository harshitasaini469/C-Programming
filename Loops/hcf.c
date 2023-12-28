#include <stdio.h>

void main()
{
    int firstnum = 12, secondnum = 30, min = 0, hcf = 1, i;

    min = firstnum < secondnum ? firstnum : secondnum;
    for (i = 1; i < min; i++)
    {
        if (firstnum % i == 0 && secondnum % i == 0)
        {
            hcf = i;
        }
    }

    printf("the hcf of %d and %d is %d", firstnum, secondnum, hcf);
}