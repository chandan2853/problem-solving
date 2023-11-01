#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum1=0,sum2=0;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(i==j){
                //cout<<mat[i][j]<<" ";
                sum1+=mat[i][j];
            }
            
        }
        int k=mat.size()-1-i;
        if(i!=k){
            //cout<<mat[i][k]<<" ";
            sum2+=mat[i][k];
        }
    }
    return sum1+sum2;
}

int main() {
    vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(m);
    return 0;
}