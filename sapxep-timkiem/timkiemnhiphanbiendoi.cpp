#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int first(int a[],int n, int x){
	int res = -1,l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else 
			r = m - 1;
	}
	return res;
}
int last(int a[],int n, int x){
	int res = -1,l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else 
			r = m - 1;
	}
	return res;
}
int maxfirst(int a[],int n, int x){
	int res = -1,l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] >= x){
			res = m;
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	}
	return res;
}
int mfirst(int a[],int n, int x){
	int res = -1,l = 0, r = n - 1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] > x){
			res = m;
			r = m - 1;

		}
		else 
			l = m + 1;			
	}
	return res;
}

int main() {
	int n,x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	cout << first(a,n,x) << endl;
	cout << last(a,n,x) << endl;
	cout << maxfirst(a,n,x) << endl;
	cout << mfirst(a,n,x) << endl;
	if(first(a,n,x) != -1){
		cout << (last(a,n,x)-first(a,n,x) + 1) << endl;
	}
	else cout << 0 << endl;
    return 0;
}

