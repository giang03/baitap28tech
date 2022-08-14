#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(int a, int b){
	return abs(a) < abs(b);
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	stable_sort(a,a+n,cmp);
	for(int x : a) cout << x << ' ';
    return 0;
}

