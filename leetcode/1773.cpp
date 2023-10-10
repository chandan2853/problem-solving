#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int type;
    if(ruleKey=="type") type=0;
    if(ruleKey=="color") type=1;
    if(ruleKey=="name") type=2;
    int result=0;
    for(int i=0;i<items.size();i++){
        if(items[i][type]==ruleValue){
            result++;
        }
    }
    return result;
}

int main() {
    vector<vector<string>> item={{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    int result=countMatches(item,"type","phone");
    std::cout<<result;
    return 0;
}