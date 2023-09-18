#include <iostream>
using namespace std;

int main() {int t;cin>>t;
    while(t--){ 
        int n;cin>>n;
        int m=n/10;
        if(n%10==0){
            cout<<m<<endl;
        }
        else {
            cout<<m+1<<endl;
        }   
    }
	return 0;
}
