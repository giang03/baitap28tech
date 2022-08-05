#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int f = 0;
	for(int i = 0; i < n; i++){
		cout << a[i] + f << " ";
		f += a[i];
	}
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

