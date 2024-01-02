#include <stdio.h>
#include <string.h>
void main()
{
    char num[]="110100";

    for(int i=strlen(num)-1;i>=0;i--)
    {
        if(num[i]=='0')
        continue;
        else if(num[i]=='1')
        {
            for(int j=i-1;j>=0;j--)
            {
                if(num[j]=='0')
                 num[j]='1';
                else {
                    num[j]='0';
                }
            }
        }
    }

    printf("%s",num);
    
}