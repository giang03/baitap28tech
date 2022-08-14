#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	vector <int> v(n);
	map <int,int> mp;
	for(int &x : v){
		cin >> x;
		mp[x] = 1;
	}
	for(int i = 0; i < n; i++){
		if(mp[v[i]] == 1){
			cout << v[i] << ' ';
			mp[v[i]] = 0;
		}
	}
    return 0;
}

