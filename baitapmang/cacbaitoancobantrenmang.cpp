#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool snt(int n){
	if(n<2) return 0;
	else for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

void maxmang(int a[],int  n){
	int max = 0;
	for(int i = 0; i < n; i++){
		if(max < a[i])
			max = a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] == max){
			cout << a[i] << " " << i << endl;
			return;
		}
	}
}

void minmang(int a[],int n){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(min > a[i])
			min = a[i];
	}
	for(int i = n-1; i >= 0; i--){
		if(a[i] == min){
			cout << a[i] << " " << i << endl;
			return;
		}
	}
}

ll tichhaiso(int a[], int n){
	ll tich = 1;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			ll tmp = 1ll*a[i] *a[j];
			if(tich<tmp) tich = tmp;
		}
	}
	return tich;
}

bool mangdx(int a[], int n){
	int r = 0, l = n - 1;
	for(int i = r; i <=l; i++){
		if(a[r] != a[l]) return 0;
		r++; l--;
	}
	return 1;
}

int tichcacso(int a[], int n){
	ll tich = 1;
	for(int i = 0; i<n; i++){
		tich *= a[i];
		tich%=(int)(1e9+7);
	}
	return tich;
}

int main() {
	int n; cin >> n;
	int a[n];
	int dem = 0;
	for(int i = 0; i<n; i++){
		cin >> a[i];
		if(snt(a[i])) dem++;
	}
	maxmang(a,n);
	minmang(a,n);
	cout << dem << endl;
	cout << tichhaiso(a,n) << endl;
	if(mangdx(a,n))
		cout << "YES\n";
	else cout << "NO\n";
	cout << tichcacso(a,n) << endl;
    return 0;
}

