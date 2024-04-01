#include <stdio.h>

void add()
{
    float a,b;

    printf("Input a, b:");
    scanf("%f %f",&a,&b);

    printf("Result:%f",a+b);
}

int main()
{
    void (*fp)();

    fp = add;
    fp();
    return 0;
}