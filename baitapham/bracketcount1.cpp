#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int MOD = 10000007;

ll a[1000001];

void catalan(){
    a[0] = 1;
    for(int i = 0; i< 1000000; i++){
        a[i+1] = (1ll*2*(2*i+1)*a[i]/(i+2));
        a[i+1] %= (int)(1e9+7);
    }
}

int main() {
    catalan();
    int n; cin >> n;
    if(n%2 != 0) cout << 0;
    else 
        cout << a[n/2] << endl;
    return 0;
}

