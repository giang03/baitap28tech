#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset <int> ms;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    for(int i = k; i < n; i++){
        cout << *ms.begin() << ' ' << *ms.rbegin() << endl;
        auto it = ms.find(a[i - k]);
        ms.erase(it);
        ms.insert(a[i]);
    }
    cout << *ms.begin() << ' ' << *ms.rbegin() << endl;
    return 0;
}