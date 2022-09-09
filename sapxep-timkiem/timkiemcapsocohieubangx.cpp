#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;



int main() {
	int n,k; cin >> n >> k;
	int a[n];
	set <int> se;
	for(int &x : a){
		cin >> x;
		se.insert(x);
	}
	sort(a,a+n);
	int ok = -1;
	for(int i = 0; i < n; i++){
		if(se.find(a[i] - k) != se.end()){
			ok = 1;
			break;
		}
	}
	cout << ok << endl;
    return 0;
}

