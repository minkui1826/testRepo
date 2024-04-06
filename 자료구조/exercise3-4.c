#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char newstr[100];
    int start=0,end=0,j=0;
    printf("Input String:");
    gets(str);
    for(int i=0; i<strlen(str);i++)
    {
        if(str[i]!=' ') {
            start=i;
            break;
        }
    }
    for(int i=strlen(str)-1;i>0;i--)
    {
        if(str[i]!=' ') {
            end=i;
            break;
        }
    }
    for(int i=start;i<=end;i++)
    {
        newstr[j++]=str[i];
    }
    newstr[j]='\0';
    printf("%s",newstr);
    return 0;
}