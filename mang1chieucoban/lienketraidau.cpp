#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
    if(1ll*a[0]*a[1] < 0) cout << a[0] << " ";
    for(int i = 1 ; i <n-1 ; i++){
        if(1ll*a[i]*a[i-1] < 0 || 1ll*a[i]*a[i+1] < 0)
            cout << a[i] << " ";
    }
    if(1ll*a[n-1]*a[n-2] < 0) cout << a[n-1] << " ";
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    xuly(a,n);
    return 0;
}

