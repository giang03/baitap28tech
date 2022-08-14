#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	bool ok = 1;
	int a[101] = {0};
	vector <int> v(n);
	for(int &x : v) {
		cin >> x;
	}
	for(int i = 0; i < v.size(); i++){
		a[v[i]]++;
		if(v[i] == 50){
			if(a[25] * 25 < 25){
				ok = 0;
				break;
			}
			a[v[i]]--;
		}
		if(v[i] == 100){
			if(a[25] * 25 < 75 && a[50] == 0){
				ok = 0;
				break;
			}
			if(a[50] > 0){
				a[50]--;
				a[25]--;
			}
			else a[25] -= 3;
		}
	}
	if(ok) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

