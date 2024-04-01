#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i,n;
    float number;
    float *arr;
    printf("Input n : ");  //배열 크기 입력
    scanf("%d",&n);

    arr = (float *)malloc(sizeof(float)*(n+1));
    for (int j=0;j<n;j++)
    {
        scanf("%f",&arr[j]);  //배열 입력
    }
    printf("Location Index : ");  
    scanf("%d",&i);

    printf("Value : ");
    scanf("%f",&number);
    
    for (int j=n;j>=i;j--)   //입력한 인덱스 뒤 요소 한칸씩 뒤로
    {
        arr[j+1]=arr[j];
    }
    arr[i]=number;   //지정한 인덱스에 값 대입

    for(int j=0;j<n+1;j++)
    {
        printf("%f ",arr[j]);
    }

    return 0;
}