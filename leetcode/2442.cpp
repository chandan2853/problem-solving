#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include<unordered_set>
using namespace std;

int reverseNum(int n){
    int rev=0;
    while (n!=0) {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int countDistinctIntegers(vector<int>& nums) {
    unordered_set<int> res(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        res.insert(reverseNum(nums[i]));
    }
    return res.size();
}

int main() {
    vector<int> nums={1,13,10,12,31};
    cout<<countDistinctIntegers(nums);
    return 0;
}