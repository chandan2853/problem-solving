#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int findMostSignificantBit(int num) {
    int position = -1;
    while (num != 0) {
        num >>= 1;
        position++;
    }
    return position;
}
int findKOr(vector<int>& nums, int k) {
    int max_bit=0;
    for (int num : nums) {
        max_bit=std::max(max_bit, findMostSignificantBit(num) + 1);
    }
    int result=0;
    for (int i=0;i<max_bit;i++) {
        int count=0;
        for (int num : nums) {
            count+=(num>>i)&1;
        }
        if (count>=k) {
            result|=(1<<i);
        }
    }
    return result;
}

int main() {
    vector<int> nums={7,12,9,8,9,15};
    cout<<findKOr(nums,4);
    return 0;
}