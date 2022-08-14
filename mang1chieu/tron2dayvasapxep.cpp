#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(int a, int b){
	return a>b;
}

int main() {
	int n; cin >> n;
	int a[n], b[n] , k[n*2];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(a, a+n);
	sort(b, b+n, cmp);
	int c = 0, l = 0;
	for(int i = 0; i < n*2; i++){
		if(i%2 == 0){
			k[i] = a[c++];
		}
		else{
			k[i] = b[l++];
		}
	}
	for(int x : k) cout << x << " ";
    return 0;
}

