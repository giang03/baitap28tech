#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > dem){
			dem++ ;
		}
	}
	cout << dem << endl;
    return 0;
}

