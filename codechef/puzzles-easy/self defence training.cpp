// self defence training

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i,A[100];
	
	std::cin >> t;
	
	while(t--)
	{    
	    int x=0;
	    cin>>n;
	       for(i=0; i<n; i++)
	       {
	           cin>>A[i];
	       }
	       for(i=0; i<n; i++){
	          if(A[i]<=60 && A[i]>=10) {
	              x++;
	          }
	       }
	      cout<<x<<endl;
		}
	return 0;
}
