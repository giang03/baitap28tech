#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int min = 10000;
	for(int i = 0; i < n ; i++){
		for(int j = i+1; j < n; j++){
			int tmp = abs(a[i] - a[j]);
			if(min > tmp ) min = tmp;
		}
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

