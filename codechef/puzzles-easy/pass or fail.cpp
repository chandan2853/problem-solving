// pass or fail

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    
	    int m=(x*3)-((n-x)*1);
        if(m>=p) {
            cout<<"PASS"<<endl;
        }
	    else
	    {
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;
}
