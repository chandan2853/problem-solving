class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        // if(nums.size()==1){
        //     return nums[0];
        // }
        int size=0;
        vector<vector<int>> result(100001);
        int maxs=0;
        for(int i=0;i<nums.size();i++){
            size+=nums[i].size();
            for(int j=0;j<nums[i].size();j++){
                int sum=i+j;
                //if(nums[i][j])
                result[sum].push_back(nums[i][j]);
                maxs=std::max(maxs,sum);
            }
        }
        // for(int i=0;i<result.size();i++){
        //     for(int j=result[i].size()-1;j>=0;j--){
        //     // for(int j=0;j<result[i].size();j++){
        //         cout<<result[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int> fin(size);
        int ind=0;
        for(int i=0;i<=maxs;i++){
            auto temp=result[i];
            for(int j=temp.size()-1;j>=0;j--){
                //if(temp[j])
                fin[ind]=temp[j];
                ind++;
            }
        }
        return fin;
    }
};