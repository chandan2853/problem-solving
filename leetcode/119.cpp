#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> num;
    long long int x=1;
    for (int k=0;k<=rowIndex;k++) {
        num.push_back((int)x);
        x=x*(rowIndex-k)/(k+1);
    }
    return num;
}

int main() {
    vector<int>num = getRow(5);
    for(auto i:num){
        cout<<i<<" ";
    }
    return 0;
}