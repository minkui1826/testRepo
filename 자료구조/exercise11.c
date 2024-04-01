#include <stdio.h>

int main()
{
    int num;
    printf("Enter integer:");
    scanf("%d",&num);

    printf("decimal : %d\n",num);
    printf("octal : %o\n",num);
    printf("hexademical : %x",num);

    return 0;
}