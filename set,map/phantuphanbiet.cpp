#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	set <int> s(a,a+n);
	cout << s.size() << endl;
    return 0;
}

