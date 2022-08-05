#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	for(int i = 0; i< n; i++){
		bool ok = 0;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j])
				ok = 1;
		}
		if(!ok){
			int dem = 0;
			for(int j = 0; j < n; j++){
				if(a[i] == a[j]){
					dem++;
				}
			}
			cout << a[i] << " " << dem << endl;
		}
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

