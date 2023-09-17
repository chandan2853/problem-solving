#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    sort(satisfaction.begin(),satisfaction.end());
    int result=0;
    for(int i=0;i<satisfaction.size();i++) {
        int time=1,sum=0;
        for(int j=i;j<satisfaction.size();j++) {
            sum+=satisfaction[j]*(time++);
        }
        result=max(sum,result);
    }
    return result;
}

int main() {
    vector<int> vec = {-1,-8,0,5,-9};
    cout<<maxSatisfaction(vec);
    return 0;
}