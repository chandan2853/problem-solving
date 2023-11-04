class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int min1=10000000,min2=10000000;
        for(int i=0;i<left.size();i++){
            left[i]= n-left[i];
            if(left[i]<min1)
                min1=left[i];
        }
        for(int i=0;i<right.size();i++){
            if(right[i]<min2)
                min2=right[i];
        }
        int temp=0;
        if(min1<min2){temp=min1;}
        else temp=min2;
        return n-temp;
    }
};