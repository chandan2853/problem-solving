#include <iostream>
#include <string>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	int result = 0;
	while(cases--) {
		int petya, vasya, tonya;
		cin>>petya>>vasya>>tonya;
		if(petya+vasya+tonya>1) {
			result++;
		}
	}
	cout<<result;
	return 0;
}
