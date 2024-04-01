#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int temp;   
    temp=arr[1];    
    arr[1]=arr[8];  
    arr[8]=temp;   //2번쨰와 뒤에서 2번째 값 교환

    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}