#include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE][SIZE]={{9,1,0,2,5},{1,3,4,6,3},{1,5,8,5,4},{3,2,5,7,9},{0,1,2,5,2}};
    int *ptr;
    int sum=0;
    for(int i=0;i<SIZE;i++)
    {
        ptr=arr[i];  //각 행을 포인터로 지정
        sum+=*(ptr+i);  //주 대각원소의 합
    }
    printf("Sum : %d",sum);
    return 0;
}