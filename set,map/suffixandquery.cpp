#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int cnt[1000001];

int main() {
	int n; cin >> n;
	int a[n];
	set <int> se;
	int k = 0;
	for(int &x : a){
		cin >> x;
	}
	for(int i = n-1; i >= 0; i--){
		se.insert(a[i]);
		cnt[k] = se.size();
		k++;
	}
	int q; cin >> q;
	while(q--){
		int l; cin >> l;
		cout << cnt[n-l-1] << endl;
	}
    return 0;
}

