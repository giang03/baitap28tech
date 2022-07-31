#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1000001];

void cachsx(){
	a[1] = 0; a[0] = 1;
	for(int i = 2; i<1000001; i++){
		ll tmp = (i-1)*(a[i-1]+a[i-2]);
		tmp %= (int)(1e9+7);
		a[i] = tmp;
	}
}

int main() {
	cachsx();
    int n; cin >> n;
	cout << a[n] << endl;
    return 0;
}

