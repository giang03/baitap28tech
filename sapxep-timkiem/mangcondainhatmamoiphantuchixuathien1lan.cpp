#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = 0;
    unordered_set <int> se;
    for(int i = 0; i < n; i++){
        int tmp = se.size();
        se.insert(a[i]);
        if(tmp == se.size()){
            res = max(res,tmp);
            se.clear();
            se.insert(a[i]);
        }
    }
    res = max(res,(int)se.size());
    cout << res << endl;
    return 0;
}