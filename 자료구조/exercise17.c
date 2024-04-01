#include <stdio.h>

int main(){
    char ch;
    
    while(1)
    {
        printf("Input Character:");
        scanf(" %c",&ch);

        if (ch>='A'&&ch<='Z') ch+=32;
        else if (ch>='a'&&ch<='z') ch-=32;
        else if (ch=='*') break;
        else 
        {
            printf("Is not character\n");
            continue;
        }
        printf("Character : %c\n",ch);
        printf("ASCII value : %d\n",ch);
    }
    return 0;
}