#include <stdio.h>

int main()
{
    int arr[10], sum=0;

    printf("input 10 nums : ");
    for(int i=0;i<10;i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("Amount : %d\n",sum);
    printf("Clanguage_202212977_ChoiMinKyu");
}