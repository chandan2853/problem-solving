
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        int a[50];
        for(int i=0; n>0; i++)    
        {    
            a[i]=n%2;    
            n= n/2;
            if(a[i]==1){
                return i+1;
            }
        }
    }
};
int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); 
    }
	return 0;
}
