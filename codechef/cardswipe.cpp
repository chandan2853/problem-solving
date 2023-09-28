#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int num;
	    cin>>num;
	    int sum=0,maxsum=0;
	    int result[num+1]={0};
	    for(int i=0;i<num;i++){
	        int temp;
	        cin>>temp;
	        if(result[temp]==0){
	            sum++;
	            result[temp]=1;
	        }
	        else{
	            result[temp]=0;
	            sum--;
	        }
	        if(maxsum<sum) maxsum++;
	    }
	    cout<<maxsum<<endl;
	}
	return 0;
}
