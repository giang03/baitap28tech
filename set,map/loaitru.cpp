#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,m; cin >> n >> m;
	int a[n];
	set <int> se;
	set <int> lt;
	for(int &x : a) cin >> x;
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		se.insert(x);
	}
	for(int i = 0; i< n; i++){
		if(se.find(a[i]) == se.end()){
			lt.insert(a[i]);
		}
	}
	for(int x : lt){
		cout << x <<' ';
	}
    return 0;
}

