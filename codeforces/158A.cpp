#include <iostream>
using namespace std;

int main() {
	int len,pass;
	
	cin>>len>>pass;
	int arr[len]={0};
	for(int i=0;i<len;i++) {
		cin>>arr[i];
	}
	int pm=arr[pass-1];
	//cout<<"PM"<<len<<endl;
	int result=0;
	for(int i=0;i<len;i++) {
		//cout<<arr[i]<<" ";
		if(arr[i]>=pm && arr[i]>0) {
		//cout<<arr[i]<<" ";
		result++;
		}
	}
	cout<<result;
	return 0;
}	
