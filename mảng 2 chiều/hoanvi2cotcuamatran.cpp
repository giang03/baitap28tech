#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n ;
    int a[n][300];
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++)
            cin >> a[i][j];
    }
    int x,y; cin >> x >> y;
    for(int i = 0 ; i< n; i++){
        for(int j = 0; j < n ; j++){
            if(j == x - 1){
                cout << a[i][y - 1] << ' ';
            }
            else if(j == y - 1){
                cout << a[i][x - 1] << ' ';
            }
            else cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}