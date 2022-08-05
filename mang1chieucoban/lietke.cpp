#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool nt(int n){
	if (n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
bool tn(int n){
	int res = 0, ans = n;
	while(n){
		res = res*10 + n%10;
		n/=10;
	}
	if(res == ans) return 1;
	return 0;
}
bool cp(int n){
	int res = sqrt(n);
	if(res*res == n) return 1;
	return 0;
}
bool sum(int n){
	int tong = 0;
	while(n){
		tong += n%10;
		n/=10;
	}
	return nt(tong);
}

void xuly(int a[], int n){
	int demnt = 0, demtn = 0, demcp = 0, demsum = 0;
	for(int i = 0; i < n; i++){
		if(nt(a[i])) demnt++;
		if(tn(a[i])) demtn++;
		if(cp(a[i])) demcp++;
		if(sum(a[i])) demsum++;
	}
	cout << demnt << endl;
	cout << demtn << endl;
	cout << demcp << endl;
	cout << demsum << endl;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

