

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int res = INT_MAX;
    for(int i = 1; i < n; i++){
        res = min(res,a[i]- a[i-1]);
    }
    for(int i = 1; i < n; i++){
        if(a[i]- a[i-1] == res){
            cout << a[i-1] << ' ' << a[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}

