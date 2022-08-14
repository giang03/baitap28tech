#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int sumcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

bool cmp(int a, int b){
	if(sumcs(a) != sumcs(b))
		return sumcs(a) < sumcs(b);
	else
		return a < b;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n, cmp);
	for(int x : a) cout << x << ' ';
    return 0;
}

