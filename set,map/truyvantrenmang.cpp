#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	multiset <int> se;
	for(int i = 0; i< n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	int q; cin >> q;
	while(q--){
		int x,y; cin >> x >> y;
		if(x == 1){
			se.insert(y);
		}
		else if(x == 2){
			if(se.find(y) != se.end()){
				auto it = se.find(y);
				se.erase(it);
			}
				
		}
		else if(x == 3){
			if(se.find(y) != se.end())
				cout << "YES\n";
			else cout << "NO\n";
		}
	}
    return 0;
}

