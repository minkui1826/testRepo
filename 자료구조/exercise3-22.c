#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int n;
    char temp[100];
    printf("Input String:");
    gets(str);
    printf("Input n:");
    scanf("%d",&n);

    for(int i=strlen(str)-n,j=0;i<strlen(str);i++,j++)
    {
        if(str[i]>='a'&&str[i]<='z') temp[j]=str[i]-32;
        else temp[j]=str[i];
    }
    printf("%s",temp);
    return 0;
}