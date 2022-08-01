#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int a[], int r, int l){
	if(l == r) return 1;
	if(l - r == 1 && a[r] == a[l]) return 1;
	if(a[r] != a[l]) return 0;
	return check(a,r-1,l+1);
}

int main() {
	int n; cin >> n;
	int r = n-1, l = 0;
	int a[n];
	for(int &x : a)
		cin >> x;
	if(check(a,r,l)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

