

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int timkiem(int a[], int n, int x){
	int l = 0, r = n - 1;
	int pos = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] <= x){
			pos = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return pos;
}

int main() {
	int n,m; cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	for(int &x : b) cin >> x;
	for(int i = 0; i < m; i++){
		int idx = timkiem(a,n,b[i]);
		if(idx != -1) cout << a[idx] << endl;
		else cout << -1 << endl;
	}
    return 0;
}

