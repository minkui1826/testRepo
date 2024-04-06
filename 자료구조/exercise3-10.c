#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char substr[100];
    int lastpos=-1;
    printf("Input String:");
    gets(str);
    printf("Input SubString:");
    gets(substr);

    for(int i=0;i<strlen(str);i++)
    {
        int j;
        for(j=0;j<strlen(substr);j++)
        {
            if(str[i+j]!=substr[j]) break;
        }
        if(j==strlen(substr))
        {
            lastpos=i;
        }
    }
    printf("Last Position: %d",lastpos);
    return 0;
}