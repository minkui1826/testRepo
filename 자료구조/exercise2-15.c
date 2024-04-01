#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE][SIZE];
    int *ptr;
    int sum=0;
    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf(" %d",&arr[i][j]);
        }
        
    }

    for(int i=0;i<SIZE;i++)
    {
        ptr=arr[i];  //각 행을 포인터로 지정
        sum+=*(ptr+i);  //주 대각원소의 합
    }
    printf("SUM : %d",sum);

    return 0;
}