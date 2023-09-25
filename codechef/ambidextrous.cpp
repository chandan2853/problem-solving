#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    float l,r,m;
	    cin>>l>>r>>m;
	    int page=ceil(m/l);
	    int line=floor(m/r);
	    cout<<page+line<<endl;
	}
	return 0;
}
