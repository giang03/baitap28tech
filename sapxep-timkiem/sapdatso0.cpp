#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	int k = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x != 0){
			a[k++] = x;
		}
	}
	for(int i = k; i < n; i++){
		a[i] = 0;
	}
	for(int x : a) cout << x << ' ';
    return 0;
}

