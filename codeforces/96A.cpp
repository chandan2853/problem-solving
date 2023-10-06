#include <string>
#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str0="0000000";
    string str1="1111111";
    if ((str.find(str0) != std::string::npos) || (str.find(str1) != std::string::npos)) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}