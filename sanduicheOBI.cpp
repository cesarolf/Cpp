#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int combpos = 0;

    cin >> n >> m;

    vector<pair<int,int>> pairs(m);

    for( int i = 0; i < m; i++ ) cin >> pairs[i].first >> pairs[i].second;

    combpos += n;
    

    return 0;
}