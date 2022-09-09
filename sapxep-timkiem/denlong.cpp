#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,l; cin >> n >> l;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	double res = a[0];
	res = max(res,(double)l-a[n-1]);
	for(int i = 1; i < n; i++){
		res = max(res,(double)a[i]-a[i-1]);
	}
	cout << fixed << setprecision(10) << res/2 << endl;
    return 0;
}

