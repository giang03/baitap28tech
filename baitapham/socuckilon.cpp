#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	ll so = 0;
	while(n--){
		int x; cin >> x;
		so = so*10 + x;
		so %= (int)(1e9+7);
	}
	cout << so << endl;
    return 0;
}

