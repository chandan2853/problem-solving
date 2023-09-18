#include <iostream>
#include <vector>

using namespace std;

int sumOfSquares(vector<int>& nums) {
    int sum=0;
    int len=nums.size();
    for(int i=0;i<len;i++) {
        if(len%(i+1)==0) {
            sum+=nums[i]*nums[i];
        }
    }
    return sum;
}

int main() {
    vector<int> nums={2,7,1,19,18,3};
    cout<<sumOfSquares(nums);
    return 0;
}