#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.second != b.second)
		return a.second > b.second;
	else 
		return a.first < b.first;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	int res = a[0], cnt = 1;
	pair <int,int> b[n];
	int k = 0;
	if(n == 1){
		b[0].first = a[0];  b[0].second = 1;
	}
	for(int i = 1; i < n; i++){
		if(a[i] == a[i-1]){
			cnt++;
			b[k].first = res; b[k].second = cnt;
		}
		else {
			b[k].first = res; b[k].second = cnt;
			k++;
			res = a[i];
			cnt = 1;
		}
	}
	sort(b,b+k+1,cmp);
	cout << b[0].first << ' ' << b[0].second;
    return 0;
}

