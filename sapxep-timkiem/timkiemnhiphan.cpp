#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool findx(int a[],int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x) return 1;
		else if(a[m] > x){
			l = m + 1;
		}
		else 
			r = m - 1;
	}
	return 0;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		if(findx(a,n,x)) 
			cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}

