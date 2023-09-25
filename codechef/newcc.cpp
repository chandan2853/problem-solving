#include <iostream>

using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	if(x==y){
	    cout<<"Same";
	}
	else if(x>y){
	    cout<<"New";
	}
	else{
	    cout<<"Old";
	}
	return 0;
}