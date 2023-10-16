#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> puzzle_pieces(m);
    for (int i=0;i<m;++i) {
        cin>>puzzle_pieces[i];
    }
    sort(puzzle_pieces.begin(), puzzle_pieces.end());
    int min_diff=10000001;
    int left=0;
    int right=n-1;
    while (right < m) {
        int current_diff=puzzle_pieces[right]-puzzle_pieces[left];
        min_diff=min(min_diff, current_diff);
        ++left;
        ++right;
    }
    cout<<min_diff;
    return 0;
}