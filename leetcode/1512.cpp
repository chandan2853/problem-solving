#include <iostream>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int result=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                result++;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums={1,2,3,1,1,3};
    cout<<numIdenticalPairs(nums);
    return 0;
}