#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void xuly(int a[], int n){
	int cnt = 0, sum = 0;
	for(int i = 0; i < n; i++){
		if(nt(a[i])){
			sum += a[i];
			cnt ++;
		}
	}
	cout << fixed << setprecision(3) << (float)sum/cnt << endl;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	xuly(a,n);
    return 0;
}

