#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int a[], int n){
	int r = n - 1, l = 0;
	for(int i = l ; i <= r; i++){
		if(a[l] != a[r]) return 0;
		r--; l++;
	}
	return 1;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	if(check(a,n)) 
		cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

