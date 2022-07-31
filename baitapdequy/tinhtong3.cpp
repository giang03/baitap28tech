#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong(int n){
	if(n == 0) return 0;
	return 1ll*n*n*n+tong(n-1);
}

int main() {
	int n; cin >> n;
	cout << tong(n);
    return 0;
}

