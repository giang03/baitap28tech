#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100];
bool ok;

void khoitao(){
    cin >> n ;
    a[1] = 8;
    for(int i = 2; i <= n; i++){
        a[i] = 6;
    }
}

void sinh(){
    int i = n - 1;
    while(i >= 2 && a[i] == 8){
        a[i] = 6;
        i--;
    }
    if(i == 1) ok = 0;
    else {
        a[i] = 8;
    }
}

bool check(){
    int cnt6 = 0, cnt8 =0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 6){
            cnt6++;
            cnt8 =0;
            if(cnt6 == 4) return 0;
        }
        else{
            cnt6 = 0;
            cnt8++;
            if(cnt8 == 2) return 0;
        }
    }
    return 1;
}

int main(){
    khoitao();
    vector <string> res;
    ok =1;
    while(ok){
        if(check()){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}