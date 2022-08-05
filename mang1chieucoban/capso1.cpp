#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n, int k){
	int cnt = 0;
	for(int i = 0; i < n ; i++){
		for(int j = i+1; j < n; j++){
			if(a[i]+a[j] == k) cnt++;
		}
	}
	cout << cnt << endl;
}

int main() {
	int n,k; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	cin >> k;
	xuly(a,n,k);
    return 0;
}

