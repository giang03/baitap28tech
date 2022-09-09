#include <bits/stdc++.h>

using namespace std;

void nhap(int a[][100],int n,int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}

void in(long long a[][100],int n,int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main(){
    int n,m,p; cin >> n >> m >> p;
    int a[n][100], b[m][100];
    long long c[n][100];
    nhap(a,n,m); nhap(b,m,p);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += 1ll*a[i][k]*b[k][j];
            }
        }
    }
    in(c,n,p);
    return 0;
}