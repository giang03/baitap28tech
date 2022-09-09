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
            if(i == x - 1){
                cout << a[y - 1][j] << ' ';
            }
            else if(i == y - 1){
                cout << a[x - 1][j] << ' ';
            }
            else cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}