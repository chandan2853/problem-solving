#include <iostream>
#include <string>
#include <vector>

using namespace std;

string restoreString(string s, vector<int>& indices) {
    string str="";
    for(int i=0;i<s.size();i++){
        str+=" ";
    }
    //str.append(s.size()," ");
    for(int i=0;i<indices.size();i++){
        str[indices[i]]=s[i];
    }
    return str;
}

int main() {
    string s="codeleet";
    vector<int> indices={4,5,6,7,0,2,1,3};
    cout<<restoreString(s,indices);
    return 0;
}