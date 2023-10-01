#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverse(string s){
        string temp="";
        for(int i=s.size()-1;i>=0;i--){
            temp+=s[i];
        }
        return temp;
    }

    string reverseWords(string s) {
        string result="";
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                temp=reverse(temp);
                result= result+temp+' ';
                temp="";
            }
            else if(i==s.size()-1){
                temp=reverse(temp+s[i]);
                result= result+temp;
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        return result;
    }
};