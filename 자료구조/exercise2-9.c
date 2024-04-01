#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE][SIZE]={{9,1,0,2,5},{1,3,4,6,3},{1,5,8,5,4},{3,2,5,7,9},{0,1,2,5,2}};
    int sum=0;

    for(int i=0;i<SIZE;i++)
    {
        for(int j=SIZE-1;j>i;j--)
        {
            sum+=arr[i][j];  //주 대각 원소 위에 있는 요소들 총합
        }
    }
    printf("SUM : %d",sum);
}