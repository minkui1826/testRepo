#include <stdio.h>

int main()
{
    long int number;
    int arr[10];
    int cnt=0;
    scanf("%ld",&number);  //정수 입력받기

    while(number)
    {
        arr[cnt]=number%10;    //각 자리 숫자 배열에 저장
        number/=10;
        cnt++;
    }

    for(int i=cnt-1;i>=0;i--)
    {
        printf("%d ",arr[i]);  
    }

    return 0;
}