#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int len1=nums1.size();
    int len2=nums2.size();
    double result;
    int len = len1+len2;
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(),nums1.end());
    if(len%2==1){
        result=nums1[len/2];
    }
    else {
        int i=(len/2)-1;
        int j=(len/2);
        //cout<<nums1[i]<<nums1[j];
        result=(double)((nums1[i]+nums1[j]))/2;
    }

    return result;
}

int main() {
    vector<int> nums1={1,2};
    vector<int> nums2={3,4};
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}