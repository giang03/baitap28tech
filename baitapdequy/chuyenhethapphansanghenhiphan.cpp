#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void chuyen(ll n){
	if(n == 0) return ;
	else {
		chuyen(n/2);
		cout << n%2 ;
	}
}

int main() {
	ll n; cin >> n;
	if(n == 0) cout << 0;
	chuyen(n);
    return 0;
}

