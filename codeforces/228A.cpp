#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    int res=0;
    for(int i=0;i<4;i++){
        if(a[i]==a[i+1]){
            res++;
        }
    }
    cout<<res;
    return 0;
}