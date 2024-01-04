#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
void main()
{
    char string[] = "I love programming";
    char reverse[MAXSIZE];
    int len = strlen(string);
    int start = 0, i;
    int wordstart = len - 1;
    int wordend = len - 1;

    while (wordstart >= 0)
    {
        if (string[wordstart] == ' ')
        {
            i = wordstart + 1;

            while (i <= wordend)
            {
                reverse[start] = string[i];
                i++;
                start++;
            }
            reverse[start++] = ' ';
            wordend = wordstart - 1;
        }
        wordstart--;
    }
    for (int i = 0; i <= wordend; i++) // insert the last word
    {
        reverse[start++] = string[i];
    }

    reverse[start] = '\0';
    printf("the string is %s\n", string);
    printf("the reverse of the string is %s ", reverse);
}