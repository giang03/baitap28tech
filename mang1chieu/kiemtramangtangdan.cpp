#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(vector <int> v){
	for(int i = 1; i < v.size(); i++){
		if(v[i] <= v[i-1]) return 0;
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

