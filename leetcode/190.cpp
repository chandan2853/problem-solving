#include <bits/stdc++.h>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r=0;
        for(int i=0;i<32;i++){
            r<<=1;
            if((n&1)==1){
                r++;
            }
            n>>=1;
        }
        return r;

    }
};