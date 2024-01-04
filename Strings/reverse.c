#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
void main()
{
    char string1[] = "programming";
    char reverse[MAXSIZE];
    int len = strlen(string1);
    int start = 0, end = len - 1;

    while (end >= 0)
    {
        reverse[start] = string1[end];
        end--;
        start++;
    }
    printf("the string is %s\n", string1);
    printf("the reverse of the string is %s ", reverse);
}