#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result={-1,-1};
    for(int i=0;i<nums.size();i++){
        if(target==nums[i]){
            if(result[0]==-1){
                result[0]=i;
                result[1]=i;
            } else{
                result[1]=i;
            }
        }
    }
    return result;
}

int main() {
    vector<int> result,nums={5,7,7,8,8,10};
    result=searchRange(nums,8);
    cout<<result[0]<<" "<<result[1];
    return 0;
}