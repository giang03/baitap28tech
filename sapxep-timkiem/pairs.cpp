#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    int dem = 0;
    for(int &x : a) cin >> x;
    sort(a,a+n);
    for(int x : a){
        auto it = lower_bound(a,a+n,x+k);
        if(it != &a[n] && *it == k+x){
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}