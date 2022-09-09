#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	set <int> se;
	for(int i = 0; i< n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	auto l = se.begin();
	auto r = se.rbegin();
	cout << *r - * l + 1 - se.size()  << endl;
    return 0;
}

