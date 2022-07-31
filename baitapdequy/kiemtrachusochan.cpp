#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	if(n == 0) return 1;
	if(n%2 != 0) return 0;
	else return check(n/10);
	
}

int main() {
	ll n; cin >> n;
	if(check(n)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

