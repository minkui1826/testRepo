#include <stdio.h>

int main()
{
    long int number;
    int arr[10];
    int cnt=0;
    scanf("%ld",&number);

    while(number)
    {
        arr[cnt]=number%10;
        number/=10;
        cnt++;
    }

    for(int i=cnt-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}