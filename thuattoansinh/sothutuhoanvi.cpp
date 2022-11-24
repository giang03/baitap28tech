#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int dem = 0,a[n];
    for(int &x : a) cin >> x;
    do{
        dem++;
    }while(prev_permutation(a,a+n));
    cout << dem << endl;
    return 0;
}