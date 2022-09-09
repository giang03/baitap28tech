#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int tong(int a[][200], int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][j];
    }
}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < m ; j++)
            cin >> a[i][j];
    }
    for(int i = 0 ; i < n; i++){
        
        cout << endl;
    }
    return 0;
}