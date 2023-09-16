#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

bool isPerfectSquare(int num) {
    double result = num/2;
    double temp =0;
    while(result!=temp) {
        temp=result;
        result=(num/temp +temp)/2;
    }
    return floor(result) == ceil(result);
}

bool judgeSquareSum(int c) {
    int temp=sqrt(c);
    for(int i =0;i<=temp;i++) {
        int s=c-pow(i,2);
        if(isPerfectSquare(s)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cin>>num;
    cout<<judgeSquareSum(num);
    return 0;
}