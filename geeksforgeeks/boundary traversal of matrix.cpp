#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
        
        
        if(n == 1){
            for(int i=0;i<m;i++){
                ans.push_back(matrix[0][i]);
            }
            return ans;
        }
        else if(m == 1){
           for(int i=0;i<n;i++){
                ans.push_back(matrix[i][0]);
            }
            return ans; 
        }
        //n*m
        for(int i=0;i<m;i++){
            ans.push_back(matrix[0][i]);    
        }
        
        for(int i=1;i<n-1;i++){
            ans.push_back(matrix[i][m-1]);
        }
        
        for(int i=m-1;i>0;i--){
            ans.push_back(matrix[n-1][i]);
        }
        
        for(int i=n-1;i>=1;i--){
            ans.push_back(matrix[i][0]);
        }
        
        return ans;
    }
};
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
