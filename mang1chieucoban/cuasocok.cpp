#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n, int k){
	for(int i = 0; i < n ; i++){
		int sum = 0;
		if(i+k <= n){
			for(int j = i; j < i+k; j++){
				sum += a[j];
			}
			cout << sum << " ";
		}
	}
}

int main() {
	int n,k; cin >> n >> k;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n,k);
    return 0;
}

