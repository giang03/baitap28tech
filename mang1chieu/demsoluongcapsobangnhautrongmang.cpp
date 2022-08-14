#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int a[1000001];
int main() {
	int n; cin >> n;
	int max_val = INT_MIN;
	ll dem = 0;
	vector <int> v(n);
	for(int &x : v){
		cin >> x;
		a[x]++;
		max_val = max(max_val,x);
	}
	for(int i = 0; i <= max_val; i++){
		if(a[i] > 1){
			dem += 1ll*a[i]*(a[i]-1)/2;
		}
	}
	cout << dem << endl;
    return 0;
}

