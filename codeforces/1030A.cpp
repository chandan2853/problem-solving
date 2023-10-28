#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    bool is1=false;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a){
            is1=true;
        }
    }
    if(is1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}