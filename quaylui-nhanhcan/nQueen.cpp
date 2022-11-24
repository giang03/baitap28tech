#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[101];
int c[1001];
int xuoi[1001], nguoc[1001];
int cnt = 0;

void Try(int i){
    for(int j = 0; j < n; j++){
        if(i == n){
            cnt++;
            return;
        }
        if(!c[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
            a[i] = j;
            c[j] = 1; xuoi[i-j+n] = 1; nguoc[i+j-1] = 1;
            Try(i+1);
            a[i] = 0;
            c[j] = 0; xuoi[i-j+n] = 0; nguoc[i+j-1]= 0;
        }
    }
}

int main(){
    cin >> n;
    Try(0);
    cout << cnt << endl;
    return 0;
}