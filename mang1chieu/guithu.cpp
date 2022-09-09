#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int maxmang(int a[],int n,int c){
    int res = 0;
    res = max(abs(a[c]-a[0]),abs(a[c]-a[n-1]));
    return res;
}

int minmang(int a[],int n,int c){
    int res = 0;
    res = min(abs(a[c]-a[c-1]),abs(a[c]-a[c+1]));
    return res;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    for(int i = 0; i < n; i++){
        cout << minmang(a,n,i) << ' ' << maxmang(a,n,i) << endl;
    }
    return 0;
}

