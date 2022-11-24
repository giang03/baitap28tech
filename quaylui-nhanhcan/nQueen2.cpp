#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[10][10];
int c[1001];
int xuoi[1001], nguoc[1001];
ll res = 0, ans = 0;

void Try(int i){
    for(int j = 0; j < 8; j++){
        if(i == 8){
            ans = max(ans,res);
            return;
        }
        if(!c[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
            res += a[i][j];
            c[j] = 1; xuoi[i-j+8] = 1; nguoc[i+j-1] = 1;
            Try(i+1);
            res -= a[i][j];
            c[j] = 0; xuoi[i-j+8] = 0; nguoc[i+j-1]= 0;
        }
    }
}

int main(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> a[i][j];
        }
    }
    Try(0);
    cout << ans << endl;
    return 0;
}