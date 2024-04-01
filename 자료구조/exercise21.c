#include <stdio.h>

int main(){
    int m,n;

    printf("Input m,n:");
    scanf("%d %d",&m,&n);

    if (m<n)
    {
        for (int i = m;i<=n;i++)
        {
            if(i%2==1) printf("%d ",i);
        }
    }
    else if (m>n)
    {
        for (int i = n;i<=m;i++)
        {
            if(i%2==1) printf("%d ",i);
        }
    }
    else
    {
        if (m%2==1) printf("%d",m);
    }
    
    return 0;
}