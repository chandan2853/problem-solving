#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int strStr(string haystack, string needle) {
    int result= haystack.find(needle);

    if(result<haystack.length()) return result;
    return -1;
    
}

int main() {
    std::string haystack,needle;
    std::cin >> haystack >> needle;
    std::cout << strStr(haystack,needle);
}