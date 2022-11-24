#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,s;
int a[100],x[100];
int ans = 100;

int check(){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(x[i])
            sum += a[i];
    }
    return sum == s;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        if(i == n){
            if(check()){
                int res = 0;
                for(int i = 0; i < n; i++){
                    res += x[i];
                }
                ans = min(ans,res);
            }
            return;
        }
        x[i] = j;
        Try(i+1);
        x[i] = 0;
    }
}

int main(){
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Try(0);
    if(ans != 100)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}