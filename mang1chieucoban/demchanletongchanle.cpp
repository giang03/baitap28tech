#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int c = 0, l = 0, tc = 0, tl = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			c++;
			tc += a[i];
		}
		else {
			l++;
			tl += a[i];
		}
	}
	cout << c << "\n" << l << "\n"<< tc << "\n" << tl;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

