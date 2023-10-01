#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,x;
	    cin>>n>>x;
	    int temp=n*x;
	    if(temp<=99999 && temp>=10000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
