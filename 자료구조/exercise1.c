#include <stdio.h>

int main(){

    int a[10];
    
    printf("Input 10 integers:");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
        if((i+1)%3==0) printf(",\n");
    }

    return 0;
}