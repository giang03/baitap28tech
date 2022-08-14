#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int a[10000001];

int main() {
	int n; cin >> n;
	int res = 0;
	vector <int> v(n);
	for(int &x : v) {
		cin >> x;
		a[x]++;
		res = max(res, x);
	}
	for(int i = 0; i <= res; i++){
		if(a[i] != 0){
			cout << i << " " << a[i] << endl;
		}
	}
	cout << endl;
	for(int i = 0; i < v.size(); i++){
		if(a[v[i]] != 0){
			cout << v[i] << " "  << a[v[i]] << endl;
			a[v[i]] = 0;
		}
	}
    return 0;
}

