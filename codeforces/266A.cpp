#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int result=0;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            result++;
        }
    }
    cout<<result;
    return 0;
}