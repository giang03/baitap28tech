#include <bits/stdc++.h>

using namespace std;

long long fibo[1001];

void tinh(){
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i < 1001; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main(){
    tinh();
    int n; cin >> n;
    long long a[n][200];
    int x = 0;
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    while(h1 <= h2 && c1 <= c2){
        for(int i = h1; i <= h2; i++){
            a[c1][i] = fibo[x];
            x++;
        }
        c1++;
        for(int i = c1; i <= c2; i++){
            a[i][h2] = fibo[x];
            x++;
        }
        h2--;
        for(int i = h2; i >= h1; i--){
            a[c2][i] = fibo[x];
            x++;
        }
        c2--;
        for(int i = c2; i >= c1; i--){
            a[i][h1] = fibo[x];
            x++;
        }
        h1++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}