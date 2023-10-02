#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> minOperations(string boxes) {
    vector<int> result;
    for(int i=0;i<boxes.size();i++){
        int temp=0;
        for(int j=0;j<boxes.size();j++){
            if(boxes[j]=='1'){
                temp+=abs(i-j);
            }
        }
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<int> result = minOperations("01101");
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}