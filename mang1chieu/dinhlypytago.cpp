#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int a[], int n){
	for(int i = n-1; i >= 2; i--){
		int l = 0, r= i-1;
		ll res = pow(a[i],2);
		while(l < r){
			ll tong = pow(a[l],2) + pow(a[r],2);
			if(tong == res) return 1;
			else if(tong < res) l++;
			else r--;
		}
	}
	return 0;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	if(check(a,n)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

