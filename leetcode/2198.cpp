#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

long long minSum(vector<int>& nums1, vector<int>& nums2) {
    long long int a1=0,sum1=0;
    for(int i=0;i<nums1.size();i++){
        sum1+=nums1[i];
        if(nums1[i]==0){
            a1++;
            sum1++;
        }
    }
    long long int a2=0,sum2=0;
    for(int i=0;i<nums2.size();i++){
        sum2+=nums2[i];
        if(nums2[i]==0){
            a2++;
            sum2++;
        }
    }
    
    if(sum1==sum2){
        return sum1;
    }
    if(sum1<sum2){
        if(a1>0){
            return sum2;
        }
        else{
            return -1;
        }
    }
    if(sum1>sum2){
        if(a2>0){
            return sum1;
        }
        else{
            return -1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums1={3,2,0,1,0}, nums2={6,5,0};
    cout<<minSum(nums1,nums2);
    return 0;
}