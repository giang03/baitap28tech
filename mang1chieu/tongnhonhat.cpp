#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    ll so = 0 , so1 = 0;
    if(n == 1) so = a[0];
    else if(n % 2 == 0){
        so = a[0]; so1 = a[1];
        for(int i = 2; i < n; i+=2){
            so1 = so1*10 + a[i];
        }
        for(int i = 3 ; i < n; i+=2){
            so = so*10 + a[i];
        }
    }
    else{
        so = a[0] * 10 + a[1]; so1 = a[2];
        for(int i = 3; i < n; i+=2){
            so = so*10 + a[i];
        }
        for(int i = 4 ; i < n; i+=2){
            so1 = so1*10 + a[i];
        }
    }
    cout << so1 + so << endl;
    return 0;
}

