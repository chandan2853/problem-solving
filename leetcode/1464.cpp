#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    return (nums[n-1]-1)*(nums[n-2]-1);    
}

int main() {
    vector<int> nums={3,4,5,2};
    cout<<maxProduct(nums);
    return 0;
}