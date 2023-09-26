    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
     
    int main() {
    	string str;
    	cin>>str;
    	if(str.size()==1){cout<<str;}
    	else {
    		vector<int> result;
    		for(int i=0;i<str.size();i++){
    			if(i%2==0){
    				result.push_back(str[i]-'0');
    			}
    		}
    		sort(result.begin(),result.end());
    		int t=0;
    		for(int i=0;i<str.size();i++){
    			if(i%2==0){
    				cout<<result[t];t++;
    			}
    			else{
    			cout<<'+';
    			}
    		}
    	}
    	return 0;
    }