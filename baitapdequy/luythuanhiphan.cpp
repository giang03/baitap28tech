#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 1e9+7;

ll mu(int a, int b){
	if(b == 0) return 1;
	if( b%2 == 0) return mu(1ll*a*a%mod,b/2)%mod;
	else return (a%mod)*(mu(1ll*a*a%mod,b/2)%mod)%mod;
}

int main() {
	int a,b; cin >> a >> b;
	cout << mu(a,b) << endl;
    return 0;
}

