#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main(){
    int n, m; cin >> n >> m;
    int val_min = INT_MAX, val_max = INT_MIN;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < m ; j++){
            cin >> a[i][j];
            val_min = min(val_min,a[i][j]);
            val_max = max(val_max,a[i][j]);
        }
    }
    cout << val_min << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == val_min){
                cout << i +1<< ' ' << j +1<< endl;
            }
        }
    }
    cout << val_max << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == val_max){
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }
    return 0;
}