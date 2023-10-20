#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int num,k;
    cin>>num>>k;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    int result=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            result-=arr[i];
        }
    }
    cout<<result;
    return 0;
}