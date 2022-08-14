#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, k; cin >> n >> k;
	ll res = 0,tmp = 0 ,idx = 0;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i < k; i++){
		tmp += v[i];
	}
	res = tmp;
	for(int i = k; i < v.size(); i++){
		ll sum = tmp + v[i] - v[i-k];
		tmp = sum;
		if(sum > res){
			res = sum;
			idx = i - k + 1;
		}
	}
	cout << res << endl;
	for(int i = idx; i < k+idx; i++){
		cout << v[i] << ' ';
	}
    return 0;
}

