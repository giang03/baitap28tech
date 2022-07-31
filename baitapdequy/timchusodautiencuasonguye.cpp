#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sodau(ll n){
	if(n < 10) return n;
	return sodau(n/10);
}

int main() {
	ll n; cin >> n;
	cout << sodau(n) << endl;
    return 0;
}

