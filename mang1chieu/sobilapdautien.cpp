#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int a[1000001];

int main() {
	int n; cin >> n;
	bool ok = 1;
	vector <int> v(n);
	for(int &x : v){
		cin >> x;
		a[x]++;
		if(a[x] > 1){
			ok = 0;
			cout << x << endl;
			break;
		}
	}
	if(ok) cout << -1 << endl;
    return 0;
}

