#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int a[], int n){
	if(n == 1) return 1;
	if(a[n-1] <= a[n-2]) return 0;
	return check(a,n-1);
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	if(check(a,n)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

