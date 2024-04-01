#include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE][SIZE];
    int oddarr[SIZE*SIZE],evenarr[SIZE*SIZE];
    int oddcnt=0,evencnt=0;

    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf(" %d",&arr[i][j]);  //2차원 배열 입력받기
        }
        
    }

    for(int i=0;i<SIZE;i++)  
    {
        for(int j=0;j<SIZE;j++)
        {
            if(arr[i][j]%2==0)
            {
                evenarr[evencnt]=arr[i][j];   //짝수일 경우 evenarr에 저장
                evencnt++;
            }
            else
            {
                oddarr[oddcnt]=arr[i][j];   //홀수일 경우 oddarr에 저장
                oddcnt++;
            }
        }
    }
    printf("Even Array :");
    for(int i=0;i<evencnt;i++)
    {
        printf("%d ",evenarr[i]);
    }
    printf("\nOdd Array : ");
    for(int i=0;i<oddcnt;i++)
    {
        printf("%d ",oddarr[i]);
    }

    return 0;
}