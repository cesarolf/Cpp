#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int reps, n, bg, sum;
    vector <int> vecA, vecB;

    cin >> reps;

    while(reps--){

        cin >> n;

        vecA.resize(n);
        vecB.resize(n);
        
        for ( int i = 0; i < n; i++ ) cin >> vecA[i];
        for ( int i = 0; i < n; i++ ) cin >> vecB[i];

        for ( int i = 0; i < n; i++ ) if ( vecA[i] > vecB[i] ) swap(vecA[i],vecB[i]);

        bg = vecA[0];

        for ( int i = 0; i < n; i++ ) if ( vecA[i] > bg ) bg = vecA[i];
        
        sum = 0;
        for ( int num : vecB ) sum += num;

        cout << bg+sum << "\n";
    }

    return 0;
}