

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
    map <int,int> ma;
    map <int,int> mb;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ma[x]++;
    }
    int m ; cin >> m;
    int a[m];
    for(int &x : a){
         cin >> x;
         mb[x]++;
    }
    set <int> se;
    for(int i = 0; i < m; i++){
        if(ma.find(a[i]) != ma.end() && ma[a[i]] != mb[a[i]] ){
            se.insert(a[i]);
        }
        else if(ma.find(a[i]) == ma.end()){
            se.insert(a[i]);
        }
    }
    for(int x : se) cout << x << ' ';
    return 0;
}

