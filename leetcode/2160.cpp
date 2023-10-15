#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int minimumSum(int num) {
    int arr[4];
    for(int i=0;i<4;i++){
        arr[i]=num%10;
        num/=10;
    }
    sort(arr,arr+4);
    int num1 = (arr[0]*10) + arr[3];
    int num2 = (arr[1]*10) + arr[2];
    return num1+num2;
}

int main() {
    cout<<minimumSum(2358);
    return 0;
}