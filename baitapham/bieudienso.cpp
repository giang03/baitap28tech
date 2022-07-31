#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
	for(int i = 0; i <= n/111; i++){
		int x = (n-111*i)/11;
		if(11*x+111*i==n) return 1;
	}
	return 0;
}

int main() {
	ll n; cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl; 
    return 0;
}

