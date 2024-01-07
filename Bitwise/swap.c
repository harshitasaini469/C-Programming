
#include <stdio.h>

void main()
{
    int num1, num2, count = 0, bits, x;
    printf("enter the number1\n");
    scanf("%d", &num1);
    printf("enter the number2\n");
    scanf("%d", &num2);
    printf("the numbers before swapping are num1 = %d and num2 = %d \n", num1, num2);
    // using 3 variable
    // x = num1 ^ num2;
    // num1 ^= x;
    // num2 ^= x;

    // using 2 variable
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    printf("the after before swapping are num1 = %d and num2 = %d \n", num1, num2);
}