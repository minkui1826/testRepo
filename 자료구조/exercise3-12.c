#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *tempstr[10];
    int i=0;

    printf("Input String:");
    gets(str);
    printf("%s ",str);
    char *ptr = strtok(str," ");

    while(ptr!=NULL)
    {
        tempstr[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }
    for (int j = i-1;j>=0;j--)
    {
        printf("%s ",tempstr[j]);
    }
    return 0;
}