#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int minOperations(int n) {
    int ans=0;
    for(int i=0;i<n/2;i++) {
        ans+=n-((2*i) + 1);
    }
    return ans;
}

int main() {
    cout<<minOperations(4);
    return 0;
}