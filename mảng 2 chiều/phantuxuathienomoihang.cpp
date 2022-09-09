#include <bits/stdc++.h>

using namespace std;

bool check(int a[][200], int n, int x){
    for(int i = 0; i < n; i++){
        int ok = 1;
        for(int j = 0; j < n; j++){
            if(a[i][j] == x)
                ok = 0;
        }
        if(ok) return 0;
    }
    return 1;
}

int main(){
    int n;cin >> n ;
    int a[n][200];
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            res = max(res , a[i][j]);
        }
    }
    bool ok = 1;
    for(int i = 0; i <= res; i++){
        if(check(a,n,i)){
            ok = 0;
            cout << i << " ";
        }
    }
    if(ok) cout << "NOT FOUND" << endl;
    return 0;
}