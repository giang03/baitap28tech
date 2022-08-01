#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int a[],int n, int x){
	if(n == 0) return 0;
	if(x == a[n-1]) return 1;
	return check(a,n-1,x);
}

int main() {
	int n; cin >> n;
	int x;
	int a[n];
	for(int &x : a)
		cin >> x;
	cin >> x;
	if(check(a,n,x)) cout << 1;
	else cout << 0;
    return 0;
}

