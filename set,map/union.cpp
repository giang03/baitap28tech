#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    set <int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << ' ';
    }
    return 0;
}