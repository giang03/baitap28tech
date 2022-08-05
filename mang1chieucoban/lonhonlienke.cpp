#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n){
    for(int i = 1 ; i <n-1 ; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1])
            cout << a[i] << " ";
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    xuly(a,n);
    return 0;
}

