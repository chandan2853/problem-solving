#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    int result=0;
    int temp=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        temp=temp+b-a;
        if(result<temp){
            result=temp;
        }
    }
    cout<<result;
    return 0;
}