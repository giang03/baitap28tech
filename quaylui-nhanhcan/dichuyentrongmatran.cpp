#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
int a[101][101];
int cnt = 0;

void Try(int i, int j){
    if(i == n - 1 && j == m - 1){
        cnt++;
    }
    if(i + 1 < n && a[i + 1][j] != 0){
        int x = a[i + 1][j];
        a[i+1][j] = 0;
        Try(i + 1,j);
        a[i + 1][j] = x;
    }
    if(j + 1 < m && a[i][j + 1] != 0){
        int x = a[i][j+ 1];
        a[i][j+1] = 0;
        Try(i ,j + 1);
        a[i][j + 1] = x;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    Try(0,0);
    cout << cnt << endl;
    return 0;
}