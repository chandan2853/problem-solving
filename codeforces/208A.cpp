#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string str;
    cin>>str;
    int m=1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            if(!m){
                cout<<" ";
                m=1;
            }
            continue;
        }
        else{
            m=0;
            cout<<str[i];
        }
    }
    return 0;
}