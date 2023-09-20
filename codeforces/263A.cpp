#include <iostream>
using namespace std;

int main() {
int posi=0,posj=0;
int arr[5][5];
	for(int i =0;i<5;i++) {
		for(int j=0;j<5;j++) {
			cin>>arr[i][j];
			if(arr[i][j]==1) {
				posi=i;posj=j;
			}
		}
	}
	int result = abs(2-posi)+abs(2-posj);
	cout<<result;
	return 0;
}	
