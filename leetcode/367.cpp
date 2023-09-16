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

int main() {
    int num;
    cin>>num;
    cout<<isPerfectSquare(num);
    return 0;
}