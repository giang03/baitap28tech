#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem(int n){
    if(n == 1) return 0;
    if(n%3 == 1 && n/3%3 == 0) return 2+dem(n/3);
    if(n%3 == 0) return 1+dem(n/3);
    if(n%2 == 0) return 1+dem(n/2);
    return 1+dem(n-1);
}

int main() {
    int n; cin >> n;
    cout << dem(n) << endl;
    return 0;
}

