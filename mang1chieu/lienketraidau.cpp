#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int a, int b){
	if(1ll*a*b < 0) return 1;
	return 0;
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i< v.size(); i++){
		if(check(v[i],v[i-1]) || check(v[i], v[i+1]))
			cout << v[i] << " ";
	}
    return 0;
}

