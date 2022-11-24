#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,a[1002];

void khoitao(){
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void sinh(){
    int i = n;
    while( i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
        for(int j = 1; j <= n; j++){
            cout << j << ' ';
        }
        return;
    }
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + n + 1);
        for(int j = 1; j <= n; j++){
            cout << a[j] << ' ';
        }
    }
}

int main(){
    cin >> n;
    khoitao();
    sinh();
    return 0;
}