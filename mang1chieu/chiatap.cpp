#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	ll res = 0;
	if(n / 2 >= k){
		for(int i = k; i< n; i++){
			res += a[i];
		}
		for(int i = 0; i < k ; i++){
			res -= a[i];
		}
	}
	else{
		for(int i = 0; i < n-k ; i++){
			res -= a[i];
		}
		for(int i = n-k; i< n; i++){
			res += a[i];
		}
	}
	cout << res << endl;
    return 0;
}

