#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int result=0;
    for(int i:hours){
        if(i>=target) result++;
    }
    return result;
}

int main() {
    vector<int> nums={0,4,2,4,2,1};
    cout<<numberOfEmployeesWhoMetTarget(nums,4);
    return 0;
}