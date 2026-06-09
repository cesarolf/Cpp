#include <bits/stdc++.h>
using namespace std;

int main(){

    int reps, n;
    long int ctR, ctL;
    char aux;

    cin >> reps;

    while(reps--){

        cin >> n;

        ctR = 0;
        ctL = 0;

        while(n--){
            cin >> aux;
            if ( aux == ')' ) ctR++;
            else if ( aux == '(' ) ctL++;
        }

        if ( ctR == ctL ) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}