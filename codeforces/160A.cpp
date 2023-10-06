#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[num];
    int sum=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+num,greater<int>());
    int sum1=0,n=0;
    while(sum1<=sum){
        sum1+=arr[n];
        sum-=arr[n];
        n++;
    }
    cout<<n;
    return 0;
}