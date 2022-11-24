#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    multiset<int> ms;
    for(int &x : a) {
        cin >> x;
        ms.insert(x);
    }
    int t; cin >> t;
    int q;int x; 
    while(t--){
        cin >> q;
        cin >> x;
        if(q == 1){
            ms.insert(x);
        }
        else if(q == 2){
            if(ms.find(x) != ms.end()){
                ms.erase(ms.find(x));
            }
        }
        else if(q == 3){
            if(ms.lower_bound(x) != ms.end())
                cout << *ms.lower_bound(x) << endl;
            else cout << -1 << endl;
        }
        else {
            auto it = ms.upper_bound(x);
            --it;
            if(it != ms.end()){
                cout << *it << endl;
            }
            else cout << -1 << endl;
        }
    }
    return 0;
}