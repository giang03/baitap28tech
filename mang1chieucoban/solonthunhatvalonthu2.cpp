#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int max1 = 0, max2 = 0,ok = 0;
	for(int i = 0; i < n; i++){
		if(max1 < a[i]) 
			max1 = a[i];
	}
	for(int i = 0; i < n; i++){
		if(max1 == a[i]) ok++;
		if(max2 < a[i] && a[i] < max1){
			max2 = a[i];
		}
	}
	if(ok > 1) max2 = max1;
	cout << max1 << " " << max2 << endl;
}

int main() {
	int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    xuly(a,n);
    return 0;
}

