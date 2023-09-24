#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> result;
        int nums[100001] = {0};
        for(int i=0;i<n;i++) {
            if(nums[arr[i]]==1){
                result.push_back(arr[i]);
                nums[arr[i]]++;
            }
            else{
                nums[arr[i]]++;
            }
        }
        if(result.size()==0){
            result.push_back(-1);
        }
        else{
            sort(result.begin(),result.end());
        }
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
