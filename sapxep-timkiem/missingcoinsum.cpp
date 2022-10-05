#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    long long  ans = 1;
    for(int i = 0; i < n; i++){
        if(ans < a[i]) break;
        else ans += a[i];
    }
    cout << ans << endl;
    return 0;
}