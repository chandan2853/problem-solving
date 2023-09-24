#include <iostream>
#include <string>
#include <cctype>

using namespace std;

short compareStr(string str1,string str2) {
    for(int i=0;i<str1.size();i++) {
        if(tolower(str1[i]) > tolower(str2[i])){
            return 1;
        }
        else if(tolower(str1[i]) < tolower(str2[i])){
            return -1;
        }
        else {}
    }
    return 0;
}

int main() {
    string str1, str2;
    cin>>str1>>str2;
    cout<<compareStr(str1,str2);
    return 0;
}