#include <stdio.h>

void main()
{
    int n, temp, rev = 0;

    printf("input the number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (n == rev)
        printf("palindrome");
    else
        printf("not palindrome");
}
