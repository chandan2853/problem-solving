class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i=0;i<l.size();i++){
            vector<int> temp;
            int flag=0;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            for(int k=0;k<temp.size()-1;k++){
                
                if(temp[k+1] - temp[k] != temp[1] - temp[0]){
                    //cout<<temp[k]<<" "<<temp[k+1]<<endl;
                    flag=1;
                }
            }
           // cout<<endl;
            if(flag){
                res.push_back(false);
            }
            else{
                res.push_back(true);
            }
        }
        return res;
        
    }
};