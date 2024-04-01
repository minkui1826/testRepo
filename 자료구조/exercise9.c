#include <stdio.h>
#include <string.h>

int main()
{
    char item[10][20];
    int quantity[10];
    float price[10], amount[10];
    int cnt=0;
    float totalamount=0;

    printf("Enter 5 Item Quantity Price:\n");    
    for (int i=0;i<5;i++)
    {
        scanf("%s %d %f",item[i],&quantity[i],&price[i]);
        amount[i]=quantity[i]*price[i];
    }

    printf("*************** B I L L ***************\n");
    printf("Item\tQauntity\tPrice\tAmount\n");
    printf("_______________________________________\n");
    for (int i=0;i<5;i++)
    {
        printf("%s\t%d\t\t%.2f\t%.2f\n",item[i],quantity[i],price[i],amount[i]);
        totalamount += amount[i];
    }
    printf("_______________________________________\n");
    printf("     Total Amount to be paid\n");
    printf("_______________________________________\n");
    printf("\t%.2f",totalamount);

    return 0;
}