#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--) {
	    int a1,a2,b1,b2;
	    cin>>a1>>a2>>b1>>b2;
	    int neta=a1-a2,netb=b1-b2;
	    int net=neta+netb;
	    if(net<0){
	        cout<<"YES"<<endl;
	    } else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
