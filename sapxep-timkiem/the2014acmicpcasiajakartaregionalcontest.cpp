#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n,k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	int dem = 1;
	for(int i = 1; i< n; i++){
		if(a[i] - a[i-1] > k){
			dem++;
		}
	}
	cout << dem << endl;
    return 0;
}

