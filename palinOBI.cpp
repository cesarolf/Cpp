#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ct = 0;
    
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int r = n-1;
    for ( int l = 0; l < r; l++ ){
    
        if (nums[l] == nums[r]) r--;
        else{
            if (nums[l] < nums[r]){
                nums[l+1] += nums[l];
                
            } else {
                nums[r-1] += nums[r];
                r--;
                l--;
            }
            ct++;
        }
    }

    // n = nums.size()-1;
    // for( int i = 0; i <= n; i++ ){

    //     if ( i == n) continue;
    //     if (nums[i] == nums[n-i]) continue;
    //     else{
    //         if (nums[i] < nums[n-i]){
    //             nums[i] += nums[i+1];
    //             nums.erase(nums.begin()+i+1);
    //             n--;
    //             i--;
    //         } else {
    //             nums[n-i-1] += nums[n-i];
    //             nums.pop_back();
    //             n--;
    //             i--;
    //         }
    //         ct++;
    //     }
    // }

    cout << ct << "\n";

    return 0;
}