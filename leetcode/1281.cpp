#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int subtractProductAndSum(int n) {
    int sum=0,product=1;
    while(n>0){
        int temp=n%10;
        n/=10;
        sum+=temp;
        product*=temp;
    }
    return product-sum;
}

int main() {
    cout<<subtractProductAndSum(253);
    return 0;
}