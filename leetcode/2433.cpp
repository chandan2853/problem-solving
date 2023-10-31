#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> findArray(vector<int>& pref) {
    int sz=pref.size();
    vector<int> result(sz);
    result[0]=pref[0];
    //result.push_back(temp);
    for(int i=1;i<sz;i++){
        result[i]=pref[i]^pref[i-1];
    }
    return result;
}

int main() {
    vector<int> pref={5,2,0,3,1},out;
    out=findArray(pref);
    for(auto i:out){
        cout<<i<<" ";
    }
    return 0;
}