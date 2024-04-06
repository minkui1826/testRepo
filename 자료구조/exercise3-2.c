#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    char news1[20];
    int n;
    printf("Input First String:");
    scanf("%s",s1);
    printf("Input n:");
    scanf("%d",&n);
    printf("Input Second String:");
    scanf("%s",s2);

    for (int i=0;i<n;i++)
    {
        news1[i]=s1[i];
    }
    news1[n]='\0';
    strcat(news1,s2);

    printf("%s",news1);
    return 0;
}