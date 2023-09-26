#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	while(testcases--){
	    float x,y,r;
	    cin>>x>>y>>r;
	    int extraSticks=r/30;
	    cout<<ceil((extraSticks+x)/y)<<endl;
	}
	return 0;
}
