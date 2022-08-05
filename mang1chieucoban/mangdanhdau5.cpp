#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
	int b[1001] = {0};
	for(int i = 0; i< n; i++){
		bool ok = 0;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j])
				ok = 1;
		}
		if(!ok){
			for(int j = 0; j < n; j++){
				if(a[i] == a[j]){
					b[i]++;
				}
			}
		}
	}
	int max = b[0], ind = 0;
	for(int i = 1; i < n; i++){
		if(b[i] > max){
			max = b[i];
			ind = i;
		}
	}
	cout << a[ind] << " " << max; 
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	xuly(a,n);
    return 0;
}

