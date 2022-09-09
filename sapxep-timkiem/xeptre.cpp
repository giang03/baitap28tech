#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	int l = 0, r = n - 1;
	int dem = 0;
	while(l <= r){
		int tmp = a[l] + a[r];
		if(tmp <= x){
			dem++;
			l++; r--;
		}
		else {
			dem++;
			r--;
		}
	}
	cout << dem << endl;
    return 0;
}

