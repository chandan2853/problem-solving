#include <bits/stdc++.h>
using namespace std;

bool winnerOfGame(string colors) {
    int a=0, b=0;
    if(colors.size()<=2){
        return false;
    }
    for(int i=1;i<colors.size()-1;i++){
        if (colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A'){
            a++;
        }
        if (colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B'){
            b++;
        }
    }
    if (a<=b){
        return false;
    }
    return true;
}

int main(){
    cout<<winnerOfGame("AAABABB");
    return 0;
}
