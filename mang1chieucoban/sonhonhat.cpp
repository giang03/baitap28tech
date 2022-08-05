#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int min = a[0], cnt = 0;
	for(int i = 1; i < n; i++){
		if(min > a[i]) min = a[i];
	}
	for(int i = 0; i < n; i++){
		if(min == a[i]) cnt++;
	}
	cout << cnt << endl;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

