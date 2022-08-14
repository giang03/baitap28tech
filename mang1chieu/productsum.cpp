#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    vector <int> v(n);
    for(int &x : v) cin >> x;
    sort(begin(v),end(v));
    ll sum = 0;
    for(int i = 1; i < n; i++){
        ll tmp = 1ll *v[i]  * i ;
        tmp %= MOD;
        sum += tmp;
        sum %= MOD;
    }
    cout << sum << endl;
    return 0;
}

