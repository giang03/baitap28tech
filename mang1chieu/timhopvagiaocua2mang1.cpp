#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int a[10000001] = {0};
int b[10000001] = {0};
int main() {
	int n, m; cin >> n >> m;
	int i = 0, j = 0, res = INT_MIN;
	int g[min(m,n)], h[m+n] ,c = 0, d = 0 ;
	vector <int> v1(n);
	vector <int> v2(m);
	for(int &x : v1){
		cin >> x;
		a[x]++;
		res = max(res,x);
	}
	for(int &x : v2) {
		cin >> x;
		b[x]++;
		res = max(res,x);
	}
	for(int i = 0; i <= res; i++){
		if(a[i] && b[i]){
			g[c++] = i;
			h[d++] = i;
			a[i] = 0; b[i] = 0;
		}
		else if(a[i] || b[i]){
			h[d++] = i;
			a[i] = 0; b[i] = 0;
		}
	}
	for(int i = 0; i < c; i++){
		cout << g[i] << ' ';
	}
	cout << endl;
	for(int i = 0; i < d; i++){
		cout << h[i] << ' ';
	}
    return 0;
}

