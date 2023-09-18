// cup finals

#include <iostream>
using namespace std;

int main() {
    int n,x,y,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>d;
        if(abs(x-y)<=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
