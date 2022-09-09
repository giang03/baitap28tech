#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	pair <int,int> pa[n];
	for(int i = 0; i < n; i++){
		cin >> pa[i].first >> pa[i].second;
	}
	sort(pa, pa+n);
	ll sum = pa[0].first + pa[0].second;
	for(int i = 1; i < n; i++){
		if(sum < pa[i].first){
			sum = pa[i].first + pa[i].second;
		}
		else {
			sum += pa[i].second;
		}
	}
	cout << sum << endl;
    return 0;
}

