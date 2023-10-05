    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
     
    int main() {
    	int num,k;
    	cin>>num>>k;
    	while(k--){
    		if(num%10==0){
    			num/=10;
    		}
    		else{
    			num--;
    		}
    	}
    	cout<<num;
    	return 0;
    }