#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gt(int n){
	if(n == 0) return 1;
	return 1ll*n*gt(n-1);
}

int main() {
	int n;
	cin >> n;
	cout << gt(n);
    return 0;
}

