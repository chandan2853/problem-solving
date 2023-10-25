#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int result=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        //cout<<result<<endl;
        if(a<=k){
            result+=1;
        }
        else{
            result+=2;
        }
    }
    cout<<result;
    return 0;
}