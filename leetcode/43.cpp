#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

string multiply(string arr1, string arr2) {
    if(arr1=="0" || arr2=="0"){
        return "0";
    }
    int size1=arr1.size();
    int size2=arr2.size();

    std::string str="";
    reverse(arr1.begin(),arr1.end());
    reverse(arr2.begin(),arr2.end());
    int ans[100001]={0};
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            ans[i+j]+=(arr1[i]-48)*(arr2[j]-48);
            ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
            ans[i+j]%=10;
        }
    }
    for(int i=size1+size2-1;i>=0;i--)
    {
        str+=(char)(ans[i]+48);
    }
    if(str[0]=='0'){str.erase(0,1);}

    return str;
}

int main() {
    cout<<multiply("546547","65765");
    return 0;
}