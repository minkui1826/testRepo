#include <stdio.h>

int main(){
    char ch;

    printf("Input:");
    scanf("%c",&ch);

    if(ch>='0'&&ch<='9')
    {
        printf("Is Integer");
        return 0;
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("Is Upper Character\nASCII Code : %d",ch);
        return 0;
    }
    else if (ch>='a'&&ch<='z')
    {
        printf("Is Lower Character\nASCII Code : %d",ch);
        return 0;
    }
    else
    {
        printf("Not an Integer or Character");
        return 0;
    }
    
}