#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll cpnn(int n){
	for(int i = sqrt(n); i <= n; i++){
		if(1ll*i*i%n == 0) return 1ll*i*i;
	}
	return 0;
}

int main() {
	int n; cin >> n;
	cout << cpnn(n) << endl;
    return 0;
}

