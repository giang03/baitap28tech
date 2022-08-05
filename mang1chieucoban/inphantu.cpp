#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	bool ok = 0;
	for(int i = 0; i < n; i++){
		if(i%2==0 && a[i]%2==0){
			ok = 1;
			cout << a[i] << " ";
		}
	}
	if(!ok) cout << "NONE\n" ;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

