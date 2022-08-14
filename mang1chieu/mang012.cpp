#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int a[3] = {0};

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v){
		cin >> x;
		a[x]++;
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < a[i]; j++){
			cout << i << " ";
		}
	}
    return 0;
}

