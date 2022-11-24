#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[100][100];
string s;
bool ok;

void Try(int i, int j){
    if( i == n -1 && j == n -1){
        cout << s << endl;
        ok = 0;
    }
    if(i + 1 < n && a[i+1][j]){
        s += "D";
        a[i+1][j] = 0;
        Try(i+1,j);
        s.pop_back();
        a[i+1][j] = 1;
    }
    if(j + 1 < n && a[i][j+1]){
        s += "R";
        a[i][j+1] = 0;
        Try(i,j+1);
        s.pop_back();
        a[i][j+1] = 1;
    }
    if(i - 1 >= 0 && a[i-1][j]){
        s += "U";
        a[i-1][j] = 0;
        Try(i-1,j);
        s.pop_back();
        a[i-1][j] = 1;
    }
    if(j - 1 >= 0 && a[i][j-1]){
        s += "L";
        a[i][j-1] = 0;
        Try(i,j-1);
        s.pop_back();
        a[i][j-1] = 1;
    }
}

int main(){
    cin >> n;
    ok = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    a[0][0] = 0;
    Try(0,0);
    if(ok) cout << -1 << endl;
    return 0;
}