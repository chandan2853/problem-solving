#include <iostream>
#include <vector>
#include <string>
using namespace std;


int countSeniors(vector<string>& details) {
    int result=0;
    for(int i=0;i<details.size();i++){
        int age=(details[i][11]-'0')*10+(details[i][12] -'0');
        //cout<<details[i][11]<<" "<<details[i][12]<<endl;
        //cout<<age<<" \n";
        if(age>60){
            result++;
        }
    }
    return result;
}


int main() {
    vector<string> det={"7868190130M7522","5303914400F9211","9273338290F4010"};
    cout<<countSeniors(det);
    return 0;
}