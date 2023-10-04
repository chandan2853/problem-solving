#include <iostream>
#include <string>
using namespace std;

string truncateSentence(string s, int k) {
    string result;
    k--;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            if(k==0) return result;
            else result+=s[i];k--;
        }
        else{
            result+=s[i];
        }
    }
    return result;
}

int main() {
    cout<<truncateSentence("Hello how are you Contestant",4);
    return 0;
}