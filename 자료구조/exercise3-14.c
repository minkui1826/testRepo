#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int par[10]={0,};
    int i=0,cnt=1;
    printf("Input String:");
    while(i<1000)
    {
        str[i]=getchar();
        if(str[i]=='\n'&&str[i-1]=='\n') break;
        if(str[i]=='\n') par[cnt++]=i;
        i++;
    }
    for (int j=0;j<cnt-1;j++)
    {
        printf("%d번째 문단: %d\n",j+1,par[j]);
    }
}