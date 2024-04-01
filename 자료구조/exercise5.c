#include <stdio.h>

int main()
{
    float a,b,sum;

    printf("Input a:");
    scanf("%f",&a);
    printf("Input b:");
    scanf("%f",&b);

    sum = a+b;

    printf("a = %f\n",a);
    printf("b = %f\n",b);
    printf("sum = %d",(int)sum);

    return 0;
    
}