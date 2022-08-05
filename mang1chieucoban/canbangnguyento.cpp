#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

void xuly(int a[], int n){
	for(int i = 0; i < n; i++){
		int sump = 0, sumt = 0;
		for(int j = 0; j < i; j++){
			sumt += a[j];
		}
		for(int j = i+1; j < n; j++){
			sump += a[j];
		}
		if(nt(sump) && nt(sumt)) 
			cout << i << " ";
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

