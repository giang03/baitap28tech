#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,ok;
char a[100];

void khoitao(){
    for(int i = 1; i <= n; i++){
        a[i] = 'B';
    }
}

void sinh(){
    int i = n;
    while( i >= 1 && a[i] == 'A'){
        i--;
    }
    if(i == 0){
        ok = 0; return;
    }
    else {
        a[i] = 'A';
        for(int j = i + 1; j <= n; j++){
            a[j] = 'B';
        }
    }
}

int main(){
    cin >> n;
    khoitao();
    ok = 1;
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        sinh();
        cout << endl;
    }
    return 0;
}