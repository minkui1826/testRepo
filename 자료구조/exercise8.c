#include <stdio.h>

int main()
{
    float b_pay,salary;
    printf("Input basic pay:");
    scanf("%f",&b_pay);

    const float hra = b_pay*0.1;
    const float ta = b_pay*0.05;

    salary = b_pay+hra+ta;

    printf("Salary = %.3f",salary);

    return 0;
}