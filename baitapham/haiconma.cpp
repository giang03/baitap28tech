#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tohop(ll n, int k){
	ll res = 1;
	for(int i = 1; i<=k; i++){
		res *= (n-i+1);
		res /= i;
	}
	return res;
}

int main() {
	int n;	cin >> n;
	for(int i = 1; i <= n ; i++){
		ll m = 1ll * i * i;
		cout << tohop(m,2) - 4*(i-1)*(i-2) << endl;
	}
    return 0;
}

