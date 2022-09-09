#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int n; cin >> n ;
    int a[n][300];
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                swap(a[i][n - j - 1],a[i][j]);
            }
            // cout << a[i][j] << ' ';
        }
        // cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // if(i == j){
            //     swap(a[i][n - j - 1],a[i][j]);
            // }
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}