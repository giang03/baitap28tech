#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, ans = 1e9;
    ll sum = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        if(sum == k){
            ans = min(ans,r - l + 1);
        }
        while(sum > k){
            sum -= a[l]; l++;
            if(sum == k){
                ans = min(ans,r - l + 1);
            }
        }
    }
    if(ans == 1e9 ) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}