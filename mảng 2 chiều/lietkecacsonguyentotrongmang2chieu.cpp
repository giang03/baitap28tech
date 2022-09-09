#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

bool nt(int n){
    if( n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}


int main(){
    int n, m; cin >> n >> m;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < m ; j++)
            cin >> a[i][j];
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m ; j++){
            if(nt(a[i][j])) cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}