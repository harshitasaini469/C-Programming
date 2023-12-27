#include <stdio.h>
#include <math.h>
void main()
{
    int n, first, last, temp, n1, count = 0;
    printf("enter the number\n");
    scanf("%d", &n);
    // printf("%d\n",n);
    last = n % 10;
    // printf("%d\n",last);
    n1 = n;
    while (n1 > 10)
    {
        count++;
        n1 = n1 / 10;
    }
    first = n1;

    temp = last;
    temp *= (int)pow(10, count);
    // printf("%d\n",temp);
    temp += n % ((int)pow(10, count));
    // printf("%d\n",temp);
    temp -= last;
    // printf("%d\n",temp);
    temp += first;
    // printf("%d\n",temp);

    printf("%d", temp);
}