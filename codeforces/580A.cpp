#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n],temp=0,num=0,result=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=num){
            temp++;
        } 
        else{
            temp=1;
        }
        if(result<temp){
            result=temp;
        }
        num=arr[i];
        //cout<<temp<<" "<<result<<endl;
    }
    cout<<result;
    return 0;
}