#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int first_pos(int a[], int l, int r , int x){
	int pos = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] < x){
			pos = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return pos;
}

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
		int r = first_pos(a,i+1,n-1,k-a[i]);
		if(r != -1)
			dem += r - i;
	}
	cout << dem << endl;
    return 0;
}

