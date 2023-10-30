#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<string> s;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    int result=1;
    for(int i=0;i<n-1;i++){
        if(s[i][1]==s[i+1][0]){
            result++;
        }
    }
    cout<<result;
    return 0;
}