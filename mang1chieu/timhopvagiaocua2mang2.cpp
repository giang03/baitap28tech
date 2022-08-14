#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, m; cin >> n >> m;
	int i = 0, j = 0;
	int g[min(m,n)], h[m+n] ,a = 0, b = 0 ;
	vector <int> v1(n);
	vector <int> v2(m);
	for(int &x : v1) cin >> x;
	for(int &x : v2) cin >> x;
	while(i < n && j < m){
		if(v1[i] == v2[j]){
			g[a++] = v1[i];
			h[b++] = v1[i];
			i++;j++;
		}
		else if(v1[i] > v2[j]){
			h[b++] = v2[j++];
		}
		else {
			h[b++] = v1[i++];
		}
	}
	while( i < n) h[b++] = v1[i++];
	while( j < m) h[b++] = v2[j++];
	
	for(int i = 0; i < b; i++){
		cout << h[i] << ' ';
	}
	cout << endl;
	for(int i = 0; i < a; i++){
		cout << g[i] << ' ';
	}
    return 0;
}

