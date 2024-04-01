#include <stdio.h>
#include <stdlib.h>

int isLowerTriangular(int *a[],int n)  //아래 삼각행렬인지 확인 하는 함수
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[i][j]!=0) return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    int **arr;

    printf("Input n:");
    scanf("%d",&n);
    arr = (int **)malloc(sizeof(int*)*n);   //입력받은 n으로 n*n 배열 동적 할당
    for(int i=0;i<n;i++)
    {
        arr[i] = (int *)malloc(sizeof(int)*n);
    }

    for(int i=0;i<n;i++)   //2차원 배열에 입력받기
    {
        for(int j=0;j<n;j++)
        {
            scanf(" %d",&arr[i][j]);
        }
    }

    if(isLowerTriangular(arr,n)) printf("Is Lower Triangular");
    else printf("Is not Lower Triangular");

}