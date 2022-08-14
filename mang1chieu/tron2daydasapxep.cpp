#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, m; cin >> n >> m;
	vector <int> v1(n);
	vector <int> v2(m);
	for(int &x : v1) cin >> x;
	for(int &x : v2) cin >> x;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(v1[i] > v2[j]){
			cout << v2[j] << " ";
			j++;
		}
		else {
			cout << v1[i] << " ";
			i++;
		}
	}
	while(i < n) cout << v1[i++] << ' ';
	while(j < m) cout << v2[j++] << ' ';
    return 0;
}

