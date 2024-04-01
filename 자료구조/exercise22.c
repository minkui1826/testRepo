#include <stdio.h>

int isPrime(int x)
{
    int count=0;
    for (int i = 2;i<=x;i++)
    {
        if(x%i==0) count++;
    }
    if (count==1) return 1;
    else return 0;
}

int main(){
    int m,n;

    printf("Input m,n:");
    scanf("%d %d",&m,&n);

    if (m<n)
    {
        for (int i = m;i<=n;i++)
        {
            if(isPrime(i)) printf("%d ",i);
        }
    }
    else if (m>n)
    {
        for (int i = n;i<=m;i++)
        {
            if(isPrime(i)) printf("%d ",i);
        }
    }
    else
    {
        if(isPrime(m)) printf("%d ",m);
    }
    
    return 0;
}