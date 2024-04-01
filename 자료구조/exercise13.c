#include <stdio.h>

int min(int x, int y, int z)
{
    int min = x;
    if (min > y) min=y;
    if (min > z) min=z;

    return min;
}

int main()
{
    int x,y,z;
    printf("Input 3 integers:");
    scanf("%d %d %d",&x,&y,&z);

    printf("The smallest integer:%d",min(x,y,z));
    return 0;
    
}