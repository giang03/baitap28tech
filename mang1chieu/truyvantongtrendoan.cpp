#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	int q; cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		ll sum = 0;
		for(int i = l-1 ; i < r; i++)
			sum += v[i];
		cout << sum << endl;
	}
    return 0;
}

