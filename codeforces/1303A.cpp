#include <iostream>
#include <string>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	while(cases--) {
		string str;
		cin>>str;
		if(str.size()<=2){
			cout<<0<<endl;
			continue;
		}
		int s=0;
		for(int i=0;i<=str.size();i++){
			if(str[i]=='0'){
				s++;
			}
		}
		if(s==str.size()) {
			cout<<0<<endl;
			continue;
		}
		int start=0,end=0;
		for(int i=0;i<str.size();i++) {
			if(str[i]=='1'){
				start=i;
				for(int j=str.size()-1;j>=0;j--){
					if(str[j]=='1'){
						end=j;
						break;
					}
				}
				break;
			}
		}
		//cout<<start<<" "<<end<<endl;
		int count=0;
		for(int i=start;i<=end;i++){
			if(str[i]=='0'){
				count++;
			}
		}
		cout<<count<<endl;
	}
}
