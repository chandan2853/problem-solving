#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int lengthOfLongestSubstring(std::string s) {
    string t;
        int result=0;
        for(int i=0;i<s.length();i++) {
            t+=s[i];
            if(count(t.begin(),t.end(),s[i])==1){
                int n=t.size();
                result=max(result,n);
            }
            else{
                // t="";
                t.erase(0,t.find(s[i])+1);
            }
        }
        cout<<t<<endl;
        return result;
   
}

int main() {
    std::string inputStr;
    std::cin >> inputStr;
    std::cout << lengthOfLongestSubstring(inputStr);
}