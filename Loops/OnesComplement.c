#include <stdio.h>
#include <string.h>
void main()
{
    char num[]="11001";

    for(int i=0;i<strlen(num);i++)
    {
        if(num[i]=='1')
        num[i]='0';
        else if(num[i]=='0')
        num[i]='1';
    }
    printf("%s",num);

}