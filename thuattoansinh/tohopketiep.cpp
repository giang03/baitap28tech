#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k,a[1002];

void khoitao(){
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
}

void sinh(){
    int i = k;
    while( i >= 1 && a[i] == n + i - k){
        i--;
    }
    if(i == 0){
        for(int j = 1; j <= k; j++){
            cout << j << ' ';
        }
        return;
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
        for(int j = 1; j <= k; j++){
            cout << a[j] << ' ';
        }
    }
}

int main(){
    cin >> n >> k;
    khoitao();
    sinh();
    return 0;
}