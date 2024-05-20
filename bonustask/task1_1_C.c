#include <stdio.h>

int add(int,int);
int subtract(int,int);
int multiply(int,int);
int devide(int,int);

int main()
{
    int num,a,b,result;

    while(1)
    {
        printf("1. ADD 2.MINUS 3. MULTIPLE 4. DEVIDE\n");
        printf("Enter the menu (Enter -1 to exit): ");
        scanf("%d",&num);
        if(num!=1&&num!=2&&num!=3&&num!=4&&num!=-1) continue;
        if(num==-1) break;
        printf("input two : ");
        scanf("%d %d",&a,&b);
        switch(num) {
            case 1:
                result = add(a,b);
                break;
            case 2:
                result = subtract(a,b);
                break;
            case 3:
                result = multiply(a,b);
                break;
            case 4:
                result = devide(a,b);
                break;
        }
        printf("result : %d\n",result);
    }
    printf("Clanguage_202212977_ChoiMinKyu");
}

int add(int a,int b) {
    return a+b;
}

int subtract(int a,int b) {
    return a-b;
}

int multiply(int a,int b) {
    return a*b;
}

int devide(int a,int b) {
    return a/b;
}