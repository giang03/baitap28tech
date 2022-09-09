#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(pair <int,int> a, pair <int,int> b){
	if(a.first != b.first)
		return a.first < b.first;
	else return a.second > b.second;
}

bool check(pair <int,int> a[], int n,int s){
	ll tmp = s;
	for(int i = 0; i < n; i++){
		if(tmp > a[i].first){
			tmp += a[i].second;
		}
		else return 0;
	}
	return 1;
}

int main() {
	int n,s; cin >> n >> s;
	pair <int,int> pa[n];
	for(int i = 0; i < n; i++){
		cin >> pa[i].first >> pa[i].second;
	}
	sort(pa,pa+n,cmp);
	if(check(pa,n,s)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

