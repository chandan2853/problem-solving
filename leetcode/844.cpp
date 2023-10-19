#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

string cmp(string s){
    int i=0;
    while(i!=s.size()){
        if(s[i]=='#'){
            if(i==0){
                s.erase(0, 1);
            }
            else{
                s.erase(i-1, 2);
                i--;
            }
        }
        else{
            i++;
        }
    }
    cout<<s<<" ";
    return s;
}
bool backspaceCompare(string s, string t) {
    return cmp(s)==cmp(t);
}

int main() {
    cout<<backspaceCompare("ab#c","ad#c");
    return 0;
}