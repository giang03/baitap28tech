#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, k; cin >> n >> k;
	bool ok = 1;
	int idx = 0;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i < v.size(); i++){
		if(ok && v[i] == k){
			cout << i+1 << ' ';
			ok = 0;
		}
		if(v[i] == k) idx = i+1;
	}
	if(ok) cout << -1 << " " << -1 << endl;
	else cout << idx << endl;
    return 0;
}

