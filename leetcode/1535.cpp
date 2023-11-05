class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int max=arr[0];
        int count=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                count=1;
            }
            else{
                count++;
            }
            //cout<<max<<" "<<arr[i]<<endl;
            //cout<<count<<endl;
            if(count==k){
                return max;
            }
        }
        return max;
    }
};