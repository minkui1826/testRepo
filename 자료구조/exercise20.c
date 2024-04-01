#include <stdio.h>

int main()
{
    int a,sum=0;

    printf("Input:");
    scanf("%d",&a);

    for (int i = 1;i<=a;i++)
    {
        sum+=i;
    }
    printf("Sum:%d\n",sum);
    printf("Average:%.2f",(float)sum/a);

    return 0;
}