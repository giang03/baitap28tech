#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int res = INT_MIN;
	vector <int> v(n);
	for(int &x : v) {
		cin >> x;
		if(x > res) cout << x << " ";
		res = max(res,x);
	}
    return 0;
}

