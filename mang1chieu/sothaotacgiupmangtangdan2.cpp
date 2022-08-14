#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,d; cin >> n >> d;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	ll dem = 0;
	for(int i = 1; i < n; i++){
		if(v[i] <= v[i-1]){
			int tmp = v[i - 1] - v[i]; 
			v[i] += (tmp / d + 1) * d;
			dem += tmp / d + 1;
		}
	}
	cout << dem << endl;
    return 0;
}

