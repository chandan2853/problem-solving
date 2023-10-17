#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

bool haveConflict(vector<string>& event1, vector<string>& event2) {      
    if(event2[0]<=event1[1] && event2[1]>=event1[0]){
        return true;
    }
    return false;
}

int main() {
    vector<string> event1={"01:15","02:00"},event2={"02:00","03:00"};
    cout<<haveConflict(event1,event2);
    return 0;
}