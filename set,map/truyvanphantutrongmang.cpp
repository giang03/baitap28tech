#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	set <int> se;
	int n; cin >> n;
	for(int i = 0; i< n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		if(se.find(x) != se.end()){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
    return 0;
}

