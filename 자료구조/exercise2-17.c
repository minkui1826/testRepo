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
            scanf(" %d",&arr[i][j]);
        }
    }

    for (int i=0;i<SIZE;i++)
    {
        for(int j=0;j<i;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("SUM : %d",sum);
    return 0;
}