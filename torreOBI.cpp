#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, x1, x2;
    vector <int> vec;
    vector <int> torre;

    cin >> x;

    do { 

        torre.push_back(x);             // coloca o número na torre

        vec.push_back(x/1000);          // separação dos algarismos do número
        x -= vec[0] * 1000;
        vec.push_back(x/100);
        x -= vec[1] * 100;
        vec.push_back(x/10);
        x -= vec[2] * 10;
        vec.push_back(x);
    
        sort(vec.begin(), vec.end());                                   // ordenação crescente depois decrescente
        x1 = vec[0]*1000 + vec[1]*100 + vec[2]*10 + vec[3];
        sort(vec.rbegin(), vec.rend());
        x2 = vec[0]*1000 + vec[1]*100 + vec[2]*10 + vec[3];
        x = x2 - x1;

        vec.clear();

    } while ( find(torre.begin(), torre.end(), x)  == torre.end());

    for ( int num : torre ) cout << num << "\n";

    return 0;
}