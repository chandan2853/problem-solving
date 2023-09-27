#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x*y)%z==0){
	        cout<<x*y<<" "<<z<<endl;
	    }
	    else if((z*y)%x==0){
	        cout<<z*y<<" "<<x<<endl;
	    }
	    else if((x*z)%y==0){
	        cout<<x*z<<" "<<y<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
