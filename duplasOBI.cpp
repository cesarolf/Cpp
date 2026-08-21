#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> players(4);

    for ( int i = 0; i < 4; i++ ) cin >> players[i];

    sort(players.begin(), players.end());

    cout << abs((players[3]+players[0]) - (players[2]+players[1])) << "\n";

    return 0;
}