#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="University";
    char str2[]="Oxford Press";
    char *tempstr[3];

    tempstr[0]=strtok(str2," ");
    tempstr[1]=str1;
    tempstr[2]=strtok(NULL, " ");

    for(int i=0;i<3;i++)
    {
        printf("%s ",tempstr[i]);
    }
    return 0;
}