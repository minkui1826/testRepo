#include <iostream>

int main()
{
    int arr[10], sum=0;

    std::cout << "input 10 nums : ";
    for(int i=0;i<10;i++) {
        std::cin >> arr[i];
        sum+=arr[i];
    }

    std::cout << "Amount : " << sum << "\n";
    std::cout << "Cpp_202212977_ChoiMinKyu";
}