#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool fibo(ll n){
	if(n < 2) return 1;
	ll f1 = 0, f2 = 1;
	for(int i = 3; i<= 93; i++){
		ll fn = f1 + f2;
		if(n == fn) return 1;
		f1 = f2; 
		f2 = fn;
	}
	return 0;
}

int main() {
	int n; cin >> n;
	bool ok = 0;
	vector <ll> v(n);
	for(ll &x : v) cin >> x;
	for(int i = 0; i < v.size(); i++){
		if(fibo(v[i])){
			ok = 1;
			cout << v[i] << " ";
		}
	}
	if(!ok) cout << "NONE\n";
    return 0;
}

