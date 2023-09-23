#include <iostream>

int numberOfMatches(int n) {
    int result=0;
    while(n!=1) {
        result += n/2;
        n = n%2 + n/2;
    }
    return result;
}

int main() {
    int num;
    std::cin>>num;
    std::cout<<numberOfMatches(num);
    return 0;
}