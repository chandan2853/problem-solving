#include <iostream>
#include <string>
using namespace std;

int alternateDigitSum(int n) {
    int sum=0;
    string str = to_string(n);
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            sum+=str[i]-48;
        }
        else {
            sum-=str[i]-48;
        }
    }
    return sum;
    
}

int main() {
    cout<<alternateDigitSum(521);
    return 0;
}