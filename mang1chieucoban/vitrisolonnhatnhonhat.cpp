#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int min = 1000000, max = 0;
	for(int i = 0;i < n; i++){
		if(min > a[i]) min = a[i];
		if(max < a[i]) max = a[i];
	}
	for(int i = n-1; i >= 0; i--){
		if(a[i] == min) {
			cout << i << " ";
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] == max) {
			cout << i << " ";
			break;
		}
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

