#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem(ll n){
	if(n<10) return 1;
	return 1 + dem(n/10);
}

int main() {
	ll n; cin >> n;
	cout << dem(n) << endl;
    return 0;
}

