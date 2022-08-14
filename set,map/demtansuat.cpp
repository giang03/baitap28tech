#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	map <int,int> mp;
	for(int &x : a){
		cin >> x;
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first << ' ' << x.second << endl;
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		if(mp[a[i]] != 0){
			cout << a[i] <<' '<< mp[a[i]] << endl;
			mp[a[i]] = 0;
		}
	}
    return 0;
}

