#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    int arr[26] = {0};
    for(int i=0;i<str.size();i++) {
        int temp = str[i]-97;
        if(arr[temp]==0) {
            arr[temp]++;
        }
    }
    int sum=0;
    for(int i=0;i<26;i++) {
        sum+=arr[i];
    }
    if(sum%2==1){
        cout<<"IGNORE HIM!";
    } else {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}