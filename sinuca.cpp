#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    vector <int> prev, current;

    cin >> n;

    prev.resize(n);
    for ( int i = 0; i < n; i++ ) cin >> prev[i];

    while(n != 1){

        n--;
        current.resize(n);
        for ( int i = 0; i < n; i++ ){
            if ( prev[i] + prev[i+1] == 0 ) current[i] = -1;
            else current[i] = 1;
        }

        prev.resize(n);
        for ( int i = 0; i < n; i++ ) prev [i] = current[i];
    }

    if ( current[0] == -1 ) cout << "Branca\n";
    else cout << "Preta\n";

    return 0;
}