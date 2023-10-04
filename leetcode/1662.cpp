#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string str1,str2;
    for(int i=0;i<word1.size();i++){
        str1+=word1[i];
    }
    for(int i=0;i<word2.size();i++){
        str2+=word2[i];
    }
    if(str1==str2) return true;
    return false;
}

int main() {
    vector<string> word1={"abc", "d", "defg"};
    vector<string> word2={"abcddefg"};
    cout<<arrayStringsAreEqual(word1,word2);
    return 0;
}