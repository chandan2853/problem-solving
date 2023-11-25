class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector <int> result(nums.size(),0);
        int sum=accumulate(nums.begin()+1, nums.end(), 0);
        int n=0;
        for(int i=0;i<nums.size();i++){
            int temp=0;
            result[i]=(2*i-nums.size()+1)*nums[i]+sum-n;
            n+=nums[i];
            if(i<nums.size()-1)
                sum-=nums[i+1];
            
        }
        return result;
    }
};