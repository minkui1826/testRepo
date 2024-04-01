#include <stdio.h>
#include <math.h>

int main()
{
    float balance,rate,time,si,ci;

    printf("Input balance:");
    scanf("%f",&balance);
    printf("Input rate:");
    scanf("%f",&rate);
    printf("Input time:");
    scanf("%f",&time);

    si = balance + balance * rate/100 * time;
    ci = balance*(pow(1+(rate/100), time));

    printf("Simple Interest = %.3f\n",si);
    printf("Compound Interest = %.3f",ci);

    return 0;
    
}