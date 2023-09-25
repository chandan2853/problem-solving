#include <iostream>
#include<string>

using namespace std;

char findTheDifference(string s, string t) {
    char temp=0;
    for(auto i:s)
    {
        temp^=i;
    }
    for(auto i:t)
    {
        temp^=i;
    }
    return temp;
}
int main() {
    cout<<findTheDifference("abcd","abcde");
    return 0;
}