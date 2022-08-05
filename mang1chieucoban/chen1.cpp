#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n,x,k; cin >> n >> k >> x;
	int a[n];
	for(int &x : a)
		cin >> x;
	for(int i = 0; i < x - 1  ; i++){
		cout << a[i] << " ";
	}
	cout << k << " ";
	for(int i = x-1; i < n ; i++){
		cout << a[i] << " ";
	}
    return 0;
}

