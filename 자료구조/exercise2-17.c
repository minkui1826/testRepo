#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE][SIZE];
    int sum=0;

    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf(" %d",&arr[i][j]);   //2차원 배열 입력받기
        }
    }

    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<i;j++)
        {
            sum+=arr[i][j];  //대각원소 아래 원소 총합
        }
    }
    printf("SUM : %d",sum);
    return 0;
}