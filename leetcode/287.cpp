#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int arr[1000000] = {0};
        for(int i=0;i<nums.size();i++) {
            if(arr[nums[i]]!=0){
                return nums[i];
            }
            else {
                arr[nums[i]]++;
            }
        }
        return 0;
    }

int main() {
    vector<int> nums = {1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;
}