#include <iostream>
bool canWinNim(int n) {
    return n%4!=0;
}

int main() {
    int num;
    std::cin>>num;
    std::cout<<canWinNim(num)<<std::endl;
}