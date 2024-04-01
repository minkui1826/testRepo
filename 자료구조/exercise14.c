#include <stdio.h>
#include <math.h>

int istriangle(int x,int y,int z)
{
    int max = x;
    int a = y;
    int b = z;
    if(max<y) 
    {
        max = y;
        a = x;
        b = z;
    }
    if(max<z)
    {
        max = z;
        a = y;
        b = x;
    }

    return max<a+b ? 1:0;

}

float calarea(int x,int y,int z)
{
    float s;

    s = (x+y+z)/2;

    return sqrt(s*(s-x)*(s-y)*(s-z));
    
}

int main()
{
    int a,b,c;
    float area;
    printf("Input 3 integers:");
    scanf("%d %d %d",&a,&b,&c);

    if(istriangle(a,b,c))
    {
        area = calarea(a,b,c);
        printf("Area of triangle:%f",area);
        return 0;
    }
    printf("Is not triangle");
    return 0;
}