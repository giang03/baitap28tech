#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	int res = INT_MAX;
	for(int i = 0; i< v.size(); i++){
		for(int j = i+1; j < v.size(); j++){
			res = min(res, abs(v[i]-v[j]));
		}
	}
	cout << res << endl;
    return 0;
}

