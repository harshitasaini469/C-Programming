#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
void main()
{
    // char string[] = "azzbzza"; // odd length palindrome
    char string[] = "madam"; // even length palindrome
    int len = strlen(string);
    int start = 0, end = len - 1;
    int isPalindrome = 1;

    while (start != end)
    {
        if (string[start] != string[end])
        {
            isPalindrome = 0;
            break;
        }

        end--;
        start++;
    }
    printf("the string is %s", isPalindrome ? "Palindrome" : "not Palindrome");
}