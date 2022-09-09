#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, a, b; cin >> a >> b >> n;
	int tmp = n / b;
	if(1ll*tmp * b >= (1ll*ceil(n/tmp) * a)){
		cout << tmp * b << endl;
	}
	else 
		cout << 1ll*(tmp + 1)* b << endl;
    return 0;
}
 
