#include <iostream>
#include <vector>
#include <string>

using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int result=0;
    for(int i=0;i<sentences.size();i++) {
        int temp=1;
        for(int j=0;j<sentences[i].size();j++){
            if(sentences[i][j]==' '){
                temp++;
            }
        }
        if(temp>result){
            result=temp;
        }
    }
    return result;
}

int main() {
    vector<string> sentences={"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<mostWordsFound(sentences);
    return 0;
}