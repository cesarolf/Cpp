#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> x = {3, 5, 6, 4, 1, 2};            // unsorted vector

    cout << "unsorted vector: ";
    for ( int i : x ) cout << i << " ";
    cout << "\n";

    sort(x.begin(), x.end());                       // crecent sorting
    cout << "sorted : ";
    for ( int i : x ) cout << i << " ";
    cout << "\n";

    sort(x.rbegin(), x.rend());                     // decreasing sort
    cout << "decreasing sort: ";
    for ( int i : x ) cout << i << " ";
    cout << "\n";

    int value, index;
    cout << "what number your looking for?";
    cin >> value;

    sort(x.begin(), x.end());
    if ( binary_search(x.begin(), x.end(), value)){                 // como chamar busca binária
        cout << "Your number is in the vector\n";
        auto it = find(x.begin(), x.end(), value);
        index = *it;
        cout << "the value " << value << " is at the index " << index << "\n";
    }else cout << "Your number is not in the vector\n";

    auto it2 = max_element(x.begin(), x.end());
    int max = *it2;
    cout << "The biggest number is " << max << "\n";

    cout << abs(x[3]-x[5]) << "\n";                 // retorna o valor absoluto de algo

    return 0;
}