#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tong(int n){
	if(n == 1) return -1;
	if(n%2==0)
		return n+tong(n-1);
	else return -n+tong(n-1);
}

int main() {
	int n; cin >> n;
	cout << tong(n);
    return 0;
}

