#include <stdio.h>
#define SIZE 3
#define X 2
#define Y 3


int main()
{
    int arrA[SIZE][SIZE]={{1,2,3},{4,5,6},{7,8,9}};
    int arrB[SIZE][SIZE]={{1,3,5},{7,9,2},{4,6,8}};
    int arrSum[SIZE][SIZE];

    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            arrA[i][j]*=X;   //arrA에 X곱하기
            arrB[i][j]*=Y;   //arrB에 Y곱하기
            arrSum[i][j]=arrA[i][j]+arrB[i][j];  //arrSum에 X*arrA+Y*arrB 대입
            printf("%d\t",arrSum[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}