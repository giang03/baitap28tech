#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    int dem[n] = {0};
    set <int >se;
    int a[n];
    for(int i = 0; i< n; i++) {
        cin >> a[i];
        se.insert(a[i]);
        dem[i] = se.size();
    }
    int q; cin >> q;
    while(q--){
        int a,b; cin >> a >> b;
        cout << dem[b] - dem[a]<< endl;
    }
    return 0;
}
