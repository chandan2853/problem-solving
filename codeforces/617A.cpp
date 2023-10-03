    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <vector>
    using namespace std;
     
    int main() {
    	int num;
    	cin>>num;
    	int result=0;
    	while(num/5){
    		num-=5;
    		result++;
    	}
    	while(num/4){
    		num-=4;
    		result++;
    	}
    	while(num/3){
    		num-=3;
    		result++;
    	}
    	while(num/2){
    		num-=2;
    		result++;
    	}
    	while(num/1){
    		num-=1;
    		result++;
    	}
    	cout<<result;
    	return 0;
    }