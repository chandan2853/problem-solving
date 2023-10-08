#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    long long int num,k;
    cin>>num>>k;
    if(k>(num+1)/2){
        cout<<(k-(num+1)/2)*2;
    }
    else {
        cout<<k*2-1;
    }
    return 0;
}