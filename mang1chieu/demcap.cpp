#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,k; cin >> n >> k;
	int dem = 0;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i< v.size(); i++){
		for(int j = i+1; j < v.size(); j++){
			if(v[i] + v[j] == k) dem++;
		}
	}
	cout << dem << endl;
    return 0;
}

