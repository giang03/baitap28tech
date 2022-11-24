#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100];
bool ok;

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i] = 1;
    }
}

bool checkDoiXung(){
    int l = 1, r = n;
    while(l < r){
        if(a[l] != a[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    ok = 1;
    khoitao();
    while(ok){
        if(checkDoiXung()){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}