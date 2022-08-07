#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	int min = v[0];
	for(int i = 1; i < v.size(); i++){
		min = gcd(min, v[i]);
	}
	cout << min << endl;
    return 0;
}

