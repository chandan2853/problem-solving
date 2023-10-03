#include <iostream>
using namespace std;

int main() {
    int limak,bob;
    cin>>limak>>bob;
    int result=0;
    while(limak<=bob){
        limak*=3;
        bob*=2;
        result++;
    }
    cout<<result;
    return 0;
}