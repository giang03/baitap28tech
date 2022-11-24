#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100],cnt;
bool ok;
vector <vector<int>> v;

void khoitao(){
    cin >> n ;
    cnt = 1;
    a[1] = n;
}

void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1) i--;
    if(i == 0) ok = 0;
    else {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d /a[i];
        int r = d % a[i];
        if(q){
            for(int j = 0; j < q; j++){
                cnt++;
                a[cnt] = a[i];
            }
        }
        if(r){
            cnt++;
            a[cnt] = r;
        }
    }
}

int main(){
    khoitao();
    ok=1;
    while(ok){
        vector <int> b;
        for(int i = 1; i <= cnt; i++){
            b.push_back(a[i]);
        }
        v.push_back(b);
        sinh();
    }
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j];
            if(j != v[i].size()-1) cout << "+";
        }
        cout << endl;
    }
    return 0;
}