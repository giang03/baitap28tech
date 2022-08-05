#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	for(int i = n - 1; i >= 0; i--)
		cout << a[i] << " ";
    return 0;
}

