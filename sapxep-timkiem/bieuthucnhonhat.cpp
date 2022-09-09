#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a+1,a+n);
	ll sum = a[0];
	for(int i = n-k; i < n;i++){
		sum += a[i];
	}
	for(int i = 1; i <= n-k-1; i++){
		sum -= a[i];
	}
	cout << sum << endl;
    return 0;
}

