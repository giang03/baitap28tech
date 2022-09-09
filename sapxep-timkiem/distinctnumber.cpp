#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	set <int> se;
	while(n--){
		int x; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
    return 0;
}

