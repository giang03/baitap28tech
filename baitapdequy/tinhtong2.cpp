#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tong(int n){
	if(n == 0) return 0;
	return n*n+tong(n-1);
}

int main() {
	int n; cin >> n;
	cout << tong(n);
    return 0;
}

