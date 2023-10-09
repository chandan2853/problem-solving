    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
     
    int main() {
    	int n; 
    	string s;
    	cin>>n>>s;
    	int counta=0;
    	int countd=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='A') counta++;
    		else countd++;
    	}
    	if(countd==counta){
    		cout<<"Friendship";
    	}
    	else if(counta<countd){
    		cout<<"Danik";
    	}
    	else{
    		cout<<"Anton";
    	}
    	return 0;
    }