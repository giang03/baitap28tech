#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return n > 1;
}

bool checkdx(int a[], int n){
    int l = 0, r = n - 1;
    while(l <= r){
        if(a[l] != a[r]) return 0;
    }
    return 1;
}

long long tichma(int a[], int n){
    sort(a,a+n);
    if(a[n-1] < 0) return 1ll * a[0] *a[1];
    else if(a[0] > 0) return 1ll * a[n-1] *a[n-2];
    else{
        if(1ll*a[0]*a[1] > 1ll * a[n-1] *a[n-2])
            return 1ll * a[0] *a[1];
        return 1ll * a[n-1] *a[n-2];
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    int Max = INT_MIN, Min= INT_MAX;
    int cnt = 0;
    for(int &x : a){
        cin >> x;
        Max = max(Max, x);
        Min = min(Min, x);
    }
    for(int i = 0; i < n; i++){
        if(a[i] == Max){
            cout << Max << ' ' << i << endl;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(a[i] == Min){
            cout << Min << ' ' << i << endl;
            break;
        }
    }
    for(int x : a){
        if(nt(x)) cnt++;
    }
    cout << cnt << endl;
    int k = checkdx(a,n);
    cout << tichma(a,n) << endl;
    if(k) cout << "YES\n";
    else cout << "NO\n";
    long long tich = 1;
    for(int x : a){
        tich *= x;
        tich %= MOD;
    }
    cout << tich ;
    return 0;
}
