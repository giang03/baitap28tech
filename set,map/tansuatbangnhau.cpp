#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    map <int,int> ma;
    for(int &x : a){
        cin >> x;
        ma[x]++;
    }
    int cs = ma[a[0]], csk = 0;
    int giong = 0, khac = 0;
    bool ok = 1;
    for(int i = 0; i < n; i++){
        if(ma[a[i]] != 0){
            if(cs == ma[a[i]]){
                giong++;
            }
            else if(csk != 0 && csk != ma[a[i]]){
                ok = 0;
            }
            else {
                khac++;
                csk = ma[a[i]];
            }
            ma[a[i]] = 0;
        }
    }
    if(!ok){
        cout << "NO";
    }
    else if(giong == n || (giong == 1 && (cs == 1 || cs == csk + 1)) || (khac == 1 && (csk == 1 || csk == cs+1))){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}