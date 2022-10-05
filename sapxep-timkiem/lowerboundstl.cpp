#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        auto it = lower_bound(a,a+n,x);
        if(*it == x){
            cout << "Yes ";
        }
        else cout << "No ";
        cout << it - &a[0] + 1 << endl;
    }
    return 0;
}