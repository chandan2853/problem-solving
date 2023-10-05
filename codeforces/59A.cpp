    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
     
    int main() {
    	string s;
    	cin>>s;
    	int count=0;
    	for(int i=0;i<s.size();i++){
    		if(isupper(s[i])){
    			count++;
    		}
    	}
    	if(count>s.size()/2){
    		transform(s.begin(), s.end(), s.begin(), ::toupper); 
    	}
    	else{
    		transform(s.begin(), s.end(), s.begin(), ::tolower); 
    	}
    	cout<<s;
    	return 0;
    }