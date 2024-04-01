#include <stdio.h>

int main()
{
    float num;

    printf("Input floating point value:");
    scanf("%f",&num);

    printf("two decimal places: %.2e\n",num);
    printf("four decimal places: %.4e\n",num);
    printf("eight decimal places: %.8e",num);

    return 0;
    
}