#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	set <int> se;
	for(int &x : a){
		cin >> x;
		se.insert(x);
	}
	for(int i = 0; i < n; i++){
		auto it = se.find(a[i]);
		if(++it != se.end()){
			cout << *it << ' ';
		}
		else 
			cout << "_" << ' ';
	}
    return 0;
}

