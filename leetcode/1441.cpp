#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> result;
    int i=0;
    int k=1;
    while(target[target.size()-1]!=k){
        if(target[i]==k){
            result.push_back("Push");
            i++;
        }
        else{
            result.push_back("Push");
            result.push_back("Pop");
        }
        k++;
    }
    result.push_back("Push");
    return result;
}

int main() {
    vector<int> target={1,3};
    vector<string> result = buildArray(target,3);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}