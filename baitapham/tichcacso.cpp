#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	ll tich = 1;
	while(n--){
		int x; cin >> x;
		tich *= x;
		tich %= (int)(1e9+7);
	}
	cout << tich << endl;
    return 0;
}

