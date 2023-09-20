#include <iostream>
#include <string>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	while(cases--) {
		string str;
		cin>>str;
		int len=str.size();
		if(len<=10) {
			cout<<str<<endl;
		}
		else {
			cout<<str[0]<<to_string(len-2)<<str[len-1]<<endl;
		}
		
	}
	return 0;
}	
		
