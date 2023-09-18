// A or B

#include <iostream>
using namespace std;

int main() {
	int X,Y,T;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    int A = 500-(X*2) + 1000 - ((X+Y)*4);
	    int B = 1000-(Y*4) + 500 - ((X+Y)*2);
	    cout<<max(A,B)<<endl;
	    
	}
	return 0;
}
