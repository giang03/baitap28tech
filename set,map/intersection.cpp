#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    map<int,int> ma;
    for(int &x : a) {
        cin >> x;
        ma[x] = 1;
    }
    for(int &x : b) {
        cin >> x;
        if(ma[x] == 1){
            ma[x] = 2;
        }
    }
    for(int x : a){
        if(ma[x] == 2){
            cout << x << ' ';
            ma[x] = 0;
        }
    }
    return 0;
}