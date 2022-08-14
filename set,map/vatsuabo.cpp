#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(int a, int b){
	return a > b;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n,cmp);
	ll sum = 0;
	for(int i = 0; i< n; i++){
		if(a[i] > i){
			sum += a[i] - i;
		}
	}
	cout << sum << endl;
    return 0;
}

