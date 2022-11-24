#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k,s; 
int a[101];
int cnt = 0;

void check(){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += a[i];
    }
    if(sum == s) cnt++;
}

void Try(int i){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            check();
        }
        else Try(i+1);
    }
}

void khoitao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

int main(){
    cin >> n >> k >> s;
    khoitao();
    Try(1);
    cout << cnt << endl;
    return 0;
}