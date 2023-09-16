#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> set1(nums1.begin(),nums1.end());
    set<int> set2(nums2.begin(),nums2.end());
    vector<int> result;
    int len1=set1.size(), len2=set2.size();
    if(len1>len2){
        for(auto i:set1) {
            if(set2.count(i)){
                result.push_back(i);
            }
        }
    } else {
        for(auto i:set2) {
            if(set1.count(i)){
                result.push_back(i);
            }
        }
    }
    return result;
}

int main() {
    vector<int> num1 = {4,9,5};
    vector<int> num2 = {9,4,9,8,4};
    vector<int> result = intersection(num1,num2);
    for(auto i:result) {
        cout<<i<<" ";
    }
    return 0;
}