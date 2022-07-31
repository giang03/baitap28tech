#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuoi(ll n){
	if(n == 0) return;
	else{
		xuoi(n/10);
		cout << n%10 << " ";
	}
}
void nguoc(ll n){
	if(n == 0) return;
	else{
		cout << n%10 << " ";
		nguoc(n/10);
	}
}

int main() {
	ll n; cin >> n;
	xuoi(n);
	cout << endl;
	nguoc(n);
    return 0;
}

