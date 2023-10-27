#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int titleToNumber(string columnTitle) {
    int sz=columnTitle.size();
    // int a=columnTitle[sz-1]-64;
    // if(sz==1) return a;
    int result=0;
    reverse(columnTitle.begin(),columnTitle.end());
    //cout<<a<<endl;
    for(int i=0;i<sz;i++){
        int temp=columnTitle[i]-64;
        //cout<<columnTitle[i]<<" "<<pow(26,i)<<" ";
        result+=(temp*(pow(26,i)));

        //cout<<result<<" ";
    }
    return result;
}

int main() {
    cout<<titleToNumber("ZB");
    return 0;
}