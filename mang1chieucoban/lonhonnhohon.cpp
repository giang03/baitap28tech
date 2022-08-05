#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n, int x){
	int l = 0, b = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > x) l++;
		else if(a[i] < x) b++;
	}
	cout << b << "\n" << l << endl;
}

int main() {
	int n,x; cin >> n;
	int a[n];
	for(int &c : a)
		cin >> c;
	cin >> x;
	xuly(a,n,x);
    return 0;
}

