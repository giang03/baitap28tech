#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n , m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int j = 0;
    for(int i = 0; i < n ; i++){
        if(a[i] == b[j] && j < m){
            j++;
        }
    }
    if(j == m) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
