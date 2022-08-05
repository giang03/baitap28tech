#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}

void xuly(int a[], int n){
	int min = gcd(a[0],a[n-1]);
	for(int i = 1; i < n; i++){
		min = gcd(min , a[i] );
	}
	cout << min << endl;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

