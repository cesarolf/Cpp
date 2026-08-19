#include <bits/stdc++.h>
using namespace std;

int main(){

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
    auto it = find(x.begin(), x.end(), value);
    index = *it;
    cout << "the value " << value << " is at the index " << index << "\n";

    auto it2 = max_element(x.begin(), x.end());
    int max = *it2;
    cout << max << "\n";

    return 0;
}