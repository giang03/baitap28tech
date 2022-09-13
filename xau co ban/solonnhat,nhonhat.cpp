#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,s; cin >> m >> s;
    int tmp = s;
    int lon[m] = {0}, nho[m] = {0};
    if(s > 9*m || (s == 0 && m > 1)){
        cout << "NOT FOUND" << endl;
        return 0;
    }
    for(int i = 0; i < m; i++){
        if(s >= 9){
            lon[i] = 9;
            s -= 9;
        }
        else if(s != 0){
            lon[i] = s;
            s = 0;
        }
        else break;
    }
    --tmp;
    for(int i = m - 1; i > 0; i--){
        if(tmp >= 9){
            nho[i] = 9;
            tmp-=9;
        }
        else if(tmp != 0){
            nho[i] = tmp;
            tmp = 0;
        }
        else break;
    }
    nho[0] = tmp + 1;
    for(int x : nho) cout << x;
    cout << endl;
    for(int x : lon) cout << x;
    return 0;
}