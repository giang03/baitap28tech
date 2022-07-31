#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int lon(ll n){
	if(n < 10) return n;
	if(n%10 < lon(n/10)) return lon(n/10);
	else return n%10;
}
int be(ll n){
	if(n < 10) return n;
	if(n%10 > be(n/10)) return be(n/10);
	else return n%10;
}

int main() {
	ll n; cin >> n;
	cout << lon(n) << ' ' << be(n) << endl;
    return 0;
}

