#include <stdio.h>
#include <string.h>

int main()
{
    char story[1000];
    int i=0,cnt=0,k=0;
    printf("Enter Story:");
    while(i<1000)
    {
        story[i]=getchar();
        if(story[i]=='\n'&&story[i-1]=='\n') break;
        if(story[i]=='\n') cnt++;
        i++;
    }
    for(int j=1;j<=cnt;j++)
    {
        printf("%d.",j);
        while(k<i)
        {
            if(story[k]=='\n') break;
            printf("%c",story[k]);
            k++;
        }
        k++;
        printf("\n");
    }
    return 0;
}