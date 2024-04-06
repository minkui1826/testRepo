#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int num=0,upper=0,lower=0,spec=0;
    printf("Input String:");
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<='9') num++;
        else if(str[i]>='a'&&str[i]<='z') lower++;
        else if(str[i]>='A'&&str[i]<='Z') upper++;
        else spec++; 
    }
    printf("Digits: %d\n",num);
    printf("Upper Case: %d\n",upper);
    printf("Lower Case: %d\n",lower);
    printf("Special Characters: %d",spec);

    return 0;
}