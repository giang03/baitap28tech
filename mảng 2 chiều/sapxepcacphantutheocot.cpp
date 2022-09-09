#include <bits/stdc++.h>

using namespace std;

bool nt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n; cin >> n ;
    int a[n][300];
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++)
            cin >> a[j][i];
    }
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++){
            sort(a[i],a[i] + n);
        }
    }
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++){
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}