#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(vector <int> v){
	int l = 0, r = v.size() - 1;
	for(int i = l; i <= r; i++){
		if(v[l] != v[r]) return 0;
	}
	return 1;
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	if(check(v)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

