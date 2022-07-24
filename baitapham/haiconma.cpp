#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[100001][3];
void tohop(){
	for(int i = 1; i <= 10000; i++){
		for(int j = 1; j <= i; j++){
			if(j == 1 ) a[i][j] = i;
			else if(j == i) a[i][j] = 1;
			else 
				a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}
}

int main() {
	tohop();
	int n;	cin >> n;
	int k = 3, h = 0;
	for(int i = 1; i <= n ; i++){
		if(i == 1) cout << 0 << endl;
		else if(i == 2) cout << a[4][2] << endl;
		else if(i == 3) cout << a[8][2] << endl;
		else {
			ll m = 1ll * i * i;
			cout << a[m][2] - 8*k << endl;
			k += 3 + h;
			h++;
		}
	}
    return 0;
}

