#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int temp[4];
	    for(int i=0;i<4;i++){
	        cin>>temp[i];
	    }
	    sort(temp,temp+4);
	    if((temp[0]+temp[1]+temp[2])<temp[3]){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
