#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,k; cin >> n >> k;
	int a[n];
	map <int,int> mp;
	for(int &x : a){
		cin >> x;
		mp[x]++;
	}
	sort(a,a+n);
	ll dem = 0;
	for(int i = 0; i < n; i++){
		dem += mp[k - a[i]];
		if(2*a[i] == k)
			dem--;
	}
	cout << dem/2 << endl;
    return 0;
}

