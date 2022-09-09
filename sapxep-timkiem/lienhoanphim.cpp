#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(pair <int,int> a, pair <int,int> b){
	if(a.second != b.second )
		return a.second < b.second;
	return a.first < b.first;
}

int main() {
	int n; cin >> n;
	pair <int,int> pa[n];
	for(int i = 0; i < n; i++){
		cin >> pa[i].first >> pa[i].second;
	}
	sort(pa, pa+n, cmp);
	int dem = 1, idx = 0;
	for(int i = 1; i < n; i++){
		if(pa[i].first >= pa[idx].second){
			idx = i;
			dem++;
		}
	}
	cout << dem << endl;
    return 0;
}

