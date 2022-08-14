#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b , a%b);
}

int main() {
	int n; cin >> n;
	int dem = 0;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i < v.size(); i++){
		for(int j = i+1; j< v.size(); j++){
			if(gcd(v[i],v[j]) == 1)
				dem ++;
		}
	}
	cout << dem << endl;
    return 0;
}

