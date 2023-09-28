#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> result1,result2;
    for(int i=0;i<nums.size();i++) {
        if(nums[i]%2==0) {
            result1.push_back(nums[i]);
        }
        else{
            result2.push_back(nums[i]);
        }
    }
    result1.insert(result1.end(), result2.begin(), result2.end());
    return result1;
}

int main() {
    vector<int> nums = {3,1,2,4};
    vector<int> result = sortArrayByParity(nums);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}