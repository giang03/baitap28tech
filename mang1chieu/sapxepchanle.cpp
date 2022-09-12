#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(int a, int b){
    return a > b;
}

int main() {
    int n; cin >> n;
    int a[n];
    int c[n],l[n];
    int p=0,q=0;
    for(int &x : a) cin >> x;
    for(int x : a){
        if(x % 2==0){
            c[p++] = x;
        }
        else l[q++] = x;
    }
    sort(c,c+p);
    sort(l,l+q,cmp);
    for(int i = 0; i < q; i++){
        cout << l[i] << ' ';
    }
    for(int i = 0; i < p; i++){
        cout << c[i] << ' ';
    }
    return 0;
}
