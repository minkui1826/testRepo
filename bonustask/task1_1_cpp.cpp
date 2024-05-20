#include <iostream>

int add(int,int);
int subtract(int,int);
int multiply(int,int);
int devide(int,int);

int main()
{
    int num,a,b,result;

    while(1)
    {
        std::cout << "1. ADD 2.MINUS 3. MULTIPLE 4. DEVIDE\n";
        std::cout << "Enter the menu (Enter -1 to exit): ";
        std::cin >> num;
        if(num!=1&&num!=2&&num!=3&&num!=4&&num!=-1) continue;
        if(num==-1) break;
        std::cout << "input two : ";
        std::cin >> a >> b;
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
        std::cout << "result : " << result << "\n";
    }
    std::cout << "cpp_202212977_ChoiMinKyu";
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