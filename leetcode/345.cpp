#include <iostream>
#include <string>
#include <vector>
using namespace std;


string reverseVowels(string s) {
    string vowel = "aeiouAEIOU";
    int l=0, r=s.size()-1;

    while (l < r){
        while (l < r &&  vowel.find(s[l])==string::npos){
            l += 1;
        }
        while (r > l && vowel.find(s[r])==string::npos){
            r -= 1;
        }
        swap(s[l],s[r]);
        //cout<<s<<" ";
        l +=1;
        r -=1;
    }
    return s;
}

int main() {
    string str;
    cin>>str;
    cout<<reverseVowels(str);
    return 0;
}