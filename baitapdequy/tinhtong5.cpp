#include <bits/stdc++.h>

using namespace std;
using ll = long long;

float tong(int n){
	if(n == 1) return 1;
	return (float)1/n + tong(n-1);
}

int main() {
	int n; cin >> n;
	cout << fixed << setprecision(3) << tong(n) << endl;
    return 0;
}

