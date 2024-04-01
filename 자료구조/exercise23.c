#include <stdio.h>

int isArmstrong(int x)
{
    int a = x/100;
    int b = x%100/10;
    int c = x%10;

    if (x==a*a*a+b*b*b+c*c*c) return 1;
    else return 0;
}

int main()
{
    int num;
    while(1)
    {
        printf("Input:");
        scanf(" %d",&num);

        if (num==-1) return 0;
        else if (num<100||num>999) printf("Not 3 digits\n");
        else
        {
            if (isArmstrong(num)) printf("Is Armstrong Number\n");
            else printf("Not Armstrong Number\n");    
        }

    }
    return 0;
}