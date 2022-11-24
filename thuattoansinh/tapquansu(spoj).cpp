#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,a[1001],k;
bool ok,check[1001] = {0};

void khoitao(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        check[a[i]] = 1;
    }
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n + i - k) i--;
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}

int main(){
    khoitao();
    ok = 1;
    sinh();
    if(!ok) cout << k << endl;
    else{
        int cnt = 0;
        for(int i = 1; i <= k; i++){
            if(check[a[i]] == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}