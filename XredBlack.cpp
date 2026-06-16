#include <bits/stdc++.h>
using namespace std;

int main(){

    int reps, n, ct;
    string str1, str2;

    cin >> reps;

    while(reps--){

        cin >> n;

        cin >> str1 >> str2;

        ct = 0;
        for ( int i = 0; i < n; i++ ) if ( str1[i] != str2[i] ) ct++;

        cout << ct << "\n";
    }

    return 0;
}