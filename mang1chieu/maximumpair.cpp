#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int res = max(abs(a[n-1]+a[n-2]),abs(a[0]+a[1]));
    cout << res << endl;
    return 0;
}