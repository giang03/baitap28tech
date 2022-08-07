#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void xuly(vector <int> v){
	ll tich = 1, tong = 0;
	for(int i = 0; i< v.size(); i++){
		tong += v[i];
		tong %= MOD;
		tich *= v[i];
		tich %= MOD;
	}
	cout << tong << endl << tich << endl;
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	xuly(v);
    return 0;
}

