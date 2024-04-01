#include <stdio.h>
#define COLS 4
#define ROWS 5

int main()
{
    int arr[5][4] = {{51,74,34,75},{56,78,75,21},{34,34,86,95},{80,98,42,42},{13,57,97,45}};
    int sum=0;
    float aver;

    for (int i=0;i<ROWS;i++)
    {
        for (int j=0;j<COLS;j++)
        {
            sum+=arr[i][j];   //배열의 모든 값 총합
        }
    }
    aver=(float)sum/(ROWS*COLS);  //총합 / 요소 개수

    printf("Sum : %d, Average : %.2f",sum,aver);

    return 0;
}