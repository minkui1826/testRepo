#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char revstr[100];
    printf("Input String:");
    gets(str);

    for(int i=strlen(str)-1,j=0;i>=0;i--,j++)
    {
        revstr[j]=str[i];
    }
    printf("%s",revstr);
    return 0;
}