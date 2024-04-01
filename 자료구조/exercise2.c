#include <stdio.h>

int main(){

    int cnt=0;
    int sum=0;
    
    for (int i=2;i<201;i+=2)
    {
        cnt+=1;
        sum+=i;
    }

    printf("Count even numbers between 1-200\n");
    printf("count = %d\n",cnt);
    printf("sum = %d",sum);

    return 0;
}