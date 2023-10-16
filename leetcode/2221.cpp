#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int triangularSum(vector<int>& nums) {
        
    if(nums.size()==1){
        //cout<<"end"<<endl;
        return nums[0];
    }else{
        for(int i=0;i<nums.size()-1;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
        }
        // cout<<nums.size()<<endl;
        //nums.pop_back();
        // for(int i=0;i<nums.size()-1;i++){
        //     cout<<nums[i]<<" ";
        // }
        // cout<<endl;
        nums.pop_back();
        triangularSum(nums);
    }
    return nums[0];
}

int main() {
    vector<int> nums={1,2,3,4,5};
    cout<<triangularSum(nums);
    return 0;
}