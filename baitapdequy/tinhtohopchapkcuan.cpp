#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll tohop(int n, int k){
	if(k == n || k == 0) return 1;
	if(k == 1 ) return n;
	return tohop(n-1,k-1) + tohop(n-1,k);
}

int main() {
	int n,k; cin >> n >> k;
	cout << tohop(n,k);
    return 0;
}

