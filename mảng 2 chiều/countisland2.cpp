#include <bits/stdc++.h>

using namespace std;
pair <int,int> path[] = {{-1,0},{0,-1},{0,1},{1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
int n,m;

void Try(int a[][200],int x, int y){
    a[x][y] = 0;
    for(int k = 0; k < 8; k++){
        int i = x + path[k].first;
        int j = y + path[k].second;
        if(i >= 0 && i < n && j >= 0 && j < m){
            if(a[i][j] == 1){
                Try(a,i,j);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    int a[n][200];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                dem++;
                Try(a,i,j);
            }
        }
    }
    cout << dem << endl;
    return 0;
}