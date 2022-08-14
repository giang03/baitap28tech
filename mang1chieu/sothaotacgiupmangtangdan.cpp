#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	ll dem = 0;
	for(int i = 1; i < n; i++){
		int tmp = v[i];
		if(v[i] <= v[i-1]){
			v[i] = v[i-1] + 1;
		}
		dem += v[i] - tmp;
	}
	cout << dem << endl;
    return 0;
}

