#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void xuly(int a[], int n){
	int sum = 0;
	ll tich = 1;
	for(int i = 0; i < n; i++){
		sum += a[i];
		sum %= MOD;
		tich *= a[i];
		tich %= MOD;
	}
	cout << sum << endl << tich << endl;
} 

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

