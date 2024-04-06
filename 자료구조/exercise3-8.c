#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int cnt=0;
    printf("Input Text:");
    gets(text);

    for(int i=0;i<strlen(text);i++)
    {
        if(text[i]=='t'&&text[i+1]=='h'&&text[i+2]=='e')
        {
            cnt++;          
        }
    }
    printf("Times: %d",cnt);
    return 0;
}