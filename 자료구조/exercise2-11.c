#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[10][10];
    int oddarr[SIZE*SIZE],evenarr[SIZE*SIZE];
    int oddcnt=0,evencnt=0;

    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf(" %d",&arr[i][j]);
        }
        
    }

    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(arr[i][j]%2==0)
            {
                evenarr[evencnt]=arr[i][j];
                evencnt++;
            }
            else
            {
                oddarr[oddcnt]=arr[i][j];
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