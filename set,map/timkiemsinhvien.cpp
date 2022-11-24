#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t,q; cin >> t;
    cin.ignore();
    map <string,string> ma;
    while(t--){
        string tmp,res;
        getline(cin , tmp);
        getline(cin , res);
        ma[tmp] = res;
    }
    cin >> q;
    while(q--){
        string tmp; cin >> tmp;
        if(ma[tmp] != ""){
            cout << ma[tmp] << endl;
        }
        else cout << "NOT FOUND" << endl;
    }
    return 0;
}