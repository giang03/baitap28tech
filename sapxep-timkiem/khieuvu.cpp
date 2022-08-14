#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n, m; cin >> n >> m;
	int a[n], b[m];
	int dem = 0;
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] > b[j]){
			dem++;
			i++;
			j++;
		}
		else {
			i++;
		}
	}
 	cout << dem << endl;
    return 0; 
}

