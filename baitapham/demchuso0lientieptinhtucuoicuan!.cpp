#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll count(ll n){
    ll cnt = 0;
    for(ll i = 5; i <= n; i*=5){
        cnt += (n/i);
		cnt %= (int)(1e9+7);
    }
    return cnt;
}

int main() {
    ll n; cin >> n;
    cout << count(n) << endl;
    return 0;
}

