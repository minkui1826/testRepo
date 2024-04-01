#include <stdio.h>

int main()
{
    float num;

    printf("Input floating point number:");
    scanf("%f",&num);

    printf("Rightmost digit of the integer part of the num: %d",(int)num%10);

    return 0;
}