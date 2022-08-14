#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int maxmang(int a[],int n,int c){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(i == c) continue;
        if(1ll*a[c]*a[i] < 0){
            int tmp = abs(a[c]) + abs(a[i]);
            if(max < tmp) max = tmp;
        }
        else{
            int tmp = abs(a[c] - a[i]);
            if(max < tmp) max = tmp;
        }
    }
    return max;
}

int minmang(int a[],int n,int c){
    int min = 1000000000;
    for(int i = 0; i < n; i++){
        if(i == c) continue;
        if(1ll*a[c]*a[i] < 0){
            int tmp = abs(a[c]) + abs(a[i]);
            if(min > tmp) min = tmp;
        }
        else{
            int tmp = abs(a[c] - a[i]);
            if(min > tmp) min = tmp;
        }
    }
    return min;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    for(int i = 0; i<n; i++){
        cout << minmang(a,n,i) << ' ' << maxmang(a,n,i) << endl;
    }
    return 0;
}

