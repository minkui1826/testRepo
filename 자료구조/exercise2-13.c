#include <stdio.h>
#define SIZE 10

void change(int *x, int *y) //x와 y 변경하는 함수
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;   
}

int main()
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int biggest=0,secondbiggest=1,smallest=0,secondsmallest=1;     //가장 큰 수, 두번째 큰 수, 가장 작은 수, 두번쨰 작은 수 인덱스 저장 

    if(arr[biggest]<arr[secondbiggest]) change(&biggest,&secondbiggest);
    if(arr[smallest]>arr[secondsmallest]) change(&smallest,&secondsmallest);   //임의로 설정한 가장 작은 수가 두번째 작은수 보다 큰 경우 교환
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]>arr[biggest])
        {
            secondbiggest=biggest;
            biggest=i;
        } 
        else if(arr[i]>arr[secondbiggest]&&arr[i]<arr[biggest]) secondbiggest = i;  

        if(arr[i]<arr[smallest])
        {
            secondsmallest=smallest;
            smallest=i;   
        } 
        else if(arr[i]<arr[secondsmallest]&&arr[i]>arr[smallest]) secondsmallest=i;
    }
    change(&arr[secondbiggest],&arr[secondsmallest]);
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}