#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int numberOfBeams(vector<string>& bank) {
    vector<int> num;
    for(auto i:bank){
        int temp=0;
        for(auto ch:i){
            if(ch=='1'){
                temp++;
            }
        }
        num.push_back(temp);
    }
    int prev=num[0],result=0;
    for(int i=1;i<num.size();i++){
        if(num[i]==0) continue;
        else{
            result+=prev*num[i];
            prev=num[i];
        }
    }
    return result;
}

int main() {
    vector<string> bank={"011001","000000","010100","001000"};
    cout<<numberOfBeams(bank);
    return 0;
}