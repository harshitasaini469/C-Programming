#include <stdio.h>
#include <math.h>
int digitcount(int);
void main()
{
    int num = 371, count = 0, sum = 0, temp, r;
    count = digitcount(371);
    temp = num;
    while (temp)
    {
        r = temp % 10;
        sum += pow(r, count);
        temp /= 10;
    }
    if (num == sum)
    {
        printf("armstrong");
    }
    else
        printf("not armstrong");
}
int digitcount(int num)
{
    int count = 0, temp;
    temp = num;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    return count;
}