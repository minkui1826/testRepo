#include <stdio.h>

int iseven(int x)
{
    if(x%2==1) return 0;
    else return 1;
}
int main()
{
    int num;
    printf("Input number:");
    scanf("%d",&num);

    if(iseven(num)) printf("Divisible");
    else printf("Not Divisible");

    return 0;
}