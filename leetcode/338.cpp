#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> result;
    for (int i=0;i<=n;i++) {
        unsigned int count = 0;
        int temp = i;
        while (temp) {
            count += temp & 1;
            temp >>= 1;
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    int num;
    cin>>num;
    vector<int> temp = countBits(num);
    for(auto i:temp) {
        cout<<i<<" ";
    }
    return 0;
}