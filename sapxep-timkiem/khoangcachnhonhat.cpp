#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	int val_min = INT_MAX;
	for(int i = 1; i < n; i++){
		int tmp = a[i] - a[i-1];
		val_min = min(val_min,tmp);
	}
	cout << val_min << endl;
    return 0;
}

