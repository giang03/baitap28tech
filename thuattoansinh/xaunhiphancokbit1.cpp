#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k , a[100];
bool ok;
vector <vector<int>> v;

void khoitao(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while( i >= 1 && a[i] == 1) i--;
    if(i == 0) ok = 0;
    else {
        a[i] = 1;
        for(int j = i + 1; j <=n; j++){
            a[j] = 0;
        }
    }
}

bool check(){
    int cnt = 0;
    for(int i = 1; i <=n; i++){
        cnt += a[i];
    }
    if(cnt == k) return true;
    else return false;
}

bool check2(){
    int cnt = 0;
    int res = 0;
    int ok = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            cnt++;
            if(cnt == k) ok++;
            res = max(res,cnt);
        }
        else cnt = 0;
    }
    if(res == k && ok == 1) return true;
    return false;
}

int main(){
    khoitao();
    ok=1;
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << ' ';
        }
        if(check2()){
            vector <int> b;
            for(int i = 1; i <= n; i++){
                b.push_back(a[i]);
            }
            v.push_back(b);
        }
        sinh();
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j];
        }
        cout << ' ';
    }
    return 0;
}