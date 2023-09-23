#include <iostream>
#include <string>

using namespace std;

int countDigits(int num) {
    string str = to_string(num);
    int result = 0;
    for(int i=0;i<str.size();i++) {
        int temp = str[i] - '0';
        if(num%temp==0) {
            result++;
        }
    }
    return result;
}

int main() {
    int num;
    cin>>num;
    cout<<countDigits(num);
    return 0;
}