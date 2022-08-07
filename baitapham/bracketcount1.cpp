#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int MOD = 10000007;

ll a[1000001];

ll catalanDP(int n){
    ll catalan[n + 1];
    catalan[0] = catalan[1] = 1;
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++){
        	catalan[i] += catalan[j] * catalan[i - j - 1];
        	catalan[i] %= MOD;
		}
            
    }
    return catalan[n];
}
int main(){
	int n; cin >> n;
    if(n%2 != 0 || n == 0) cout << 0;
    else 
        cout << catalanDP(n/2) << endl;
    return 0;
}
