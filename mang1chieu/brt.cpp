#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void merge(int a[], int l, int m, int r){
	int n1 = m - l + 1, n2 = r - m;
	int x[n1], y[n2];
	for(int i = 0; i < n1; i++) x[i] = a[l + i];
	for(int i = 0; i < n2; i++) y[i] = a[m + i + 1];
	int idx = l, i = 0, j = 0;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]) a[idx++] = x[i++];
		else a[idx++] = y[j++];
	}
	while(i < n1) a[idx++] = x[i++];
	while(j < n2) a[idx++] = y[j++];
}

void mergesort(int a[], int l , int r){
	if(l < r){
		int m = (l + r) / 2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	mergesort(a,0,n-1);
	int res = INT_MAX, cnt = 0;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] < res){
			res = a[i] - a[i-1];
			cnt = 1;
		}
		else if(a[i] - a[i-1] == res) cnt++;
	}
	cout << res << ' ' << cnt << endl;
    return 0;
}

