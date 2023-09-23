#include <iostream>

int distinctIntegers(int n) {
    if(n==1){return 1;}
    return n-1;
}

int main() {
    int num;
    std::cin>>num;
    std::cout<<distinctIntegers(num);
    return 0;
}