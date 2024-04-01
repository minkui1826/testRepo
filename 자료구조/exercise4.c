#include <stdio.h>
#include <string.h>

int main(){

    char str[100];

    printf("Input address:");
    gets(str);

    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]==',')
        {
            printf("\n");
            if(str[i+1]==' ') i+=1;
        }
        else
        {
            printf("%c",str[i]);
        }
    }

    return 0;
}

//110, Sejong-daero, Jung-gu, Seoul, Republic of Korea