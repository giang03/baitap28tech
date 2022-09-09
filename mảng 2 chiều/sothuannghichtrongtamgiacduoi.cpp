#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

bool tn(int n){
    if(n < 10) return 1;
    int tmp = n, res = 0;
    while(n){
        res = res *10 + n%10;
        n/=10;
    }
    return tmp == res;
}

int main(){
    int n; cin >> n ;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++)
            cin >> a[i][j];
    }
    int dem = 0;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j <= i ; j++){
            if(tn(a[i][j]))
                dem++;
        }
    }
    cout << dem << endl;
    return 0;
}