#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void tohop(int n, int m){
	ll a[n+m][n+m];
    for(int i = 1; i < n+m; i++){
        for(int j = 1; j<=i; j++){
            if(j == 1 ) a[i][j] = i;
            else if(j == i) a[i][j] = 1;
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    cout << a[n+m-1][n-1] << endl;
}

int main() {
	int m,n; cin >> n >> m;
	if(n == 1) cout << 1;
	else
		tohop(n,m);
    return 0;
}

