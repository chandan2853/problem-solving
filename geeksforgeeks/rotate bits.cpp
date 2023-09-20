#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            vector <int> result(2,0);
            d %= 16;
            result[0] = ((n << d) | (n >> (16 - d))) & 0xFFFF;
            result[1] = ((n >> d) | (n << (16 - d))) & 0xFFFF;
            return result;
        }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}