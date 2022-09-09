#include <bits/stdc++.h>

using namespace std;

void pattern1(int a[][200], int n){
    cout << "Pattern 1:" << endl; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
}

void pattern2(int a[][200], int n){
    cout << "Pattern 2:" << endl; 
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j  >= 0; j--){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void pattern3(int a[][200], int n){
    cout << "Pattern 3:" << endl; 
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j  < n; j++){
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
}

void pattern4(int a[][200], int n){
    cout << "Pattern 4:" << endl; 
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j  >= 0; j--){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n ;
    int a[n][200];
    for(int i = 0 ; i< n; i++){
    for(int j = 0; j < n ; j++)
        cin >> a[i][j];
    }
    pattern1(a,n);
    pattern2(a,n);
    pattern3(a,n);
    pattern4(a,n);
    return 0;
}