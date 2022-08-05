#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool fibo(ll n){
	if(n < 2) return 1;
	ll f1 = 0, f2 = 1, fn;
	for(int i = 3; i <= 93; i++){
		fn = f1 + f2;
		if(n == fn) return 1;
		f1 = f2;
		f2 = fn;
	}
	return 0;
}

void xuly(ll a[], int n){
	int ok = 0;
	for(int i = 0; i < n; i++){
		if(fibo(a[i])){
			cout << a[i] << ' ';
			ok = 1;
		}
	}
	if(!ok) cout << "NONE\n";
}

int main() {
	int n; cin >> n;
	ll a[n];
	for(ll &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

