#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int isWordInRow1(string word){
    string row1="qwertyuiopQWERTYUIOP";
    for ( char c : word ){
        if ( row1.find( c ) == std::string::npos ){
            return false;
        }
    }
    return true;
}
int isWordInRow2(string word){
    string row2="asdfghjklASDFGHJKL";
    for ( char c : word ){
        if ( row2.find( c ) == std::string::npos ){
            return false;
        }
    }
    return true;
}
int isWordInRow3(string word){
    string row3="zxcvbnmZXCVBNM";
    for ( char c : word ){
        if ( row3.find( c ) == std::string::npos ){
            return false;
        }
    }
    return true;
    
}
vector<string> findWords(vector<string>& words) {
    vector<string> vec;
    for(int i=0;i<words.size();i++){
        int result=isWordInRow1(words[i])+isWordInRow2(words[i])+isWordInRow3(words[i]);
        if(result==1) vec.push_back(words[i]);
    }
    return vec;
}

int main() {
    vector<string> words={"Hello","Alaska","Dad","Peace"},result;
    result=findWords(words);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}